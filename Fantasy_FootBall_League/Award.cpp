#include "Award.h"
#include"Team.h"
#include"Player.h"
#include"String.h"
#include<iomanip>
Award::Award(Season* sh)
{
	this->season = sh;
	
}
void Award::sort()
{
	int n = 88;
	for (int i = 0; i < n-1; i++)
	{
		for (int j = 0; j < n-i-1; j++)
		{
			if (playerStat[j].points < playerStat[j + 1].points)
			{
				PlayerStats temp = playerStat[j];
				playerStat[j] = playerStat[j + 1];
				playerStat[j + 1] = temp;
			}
		}

	}

}
void Award::display()
{
	Team** teams = season->getTeams();
	static int k = 0;
	for (int i = 0; i < 8; i++)
	{
		Player** player = teams[i]->getPlayers();
		for (int j = 0; j < 11; j++)
		{
			copyStrings(player[j]->getName(), playerStat[k].name);
			copyStrings(teams[i]->getName(), playerStat[k].teamName);
			playerStat[k].points = player[j]->getAssistMade() + player[j]->getGoalsScored() + player[j]->getInterceptions() + player[j]->getTackles();
			k += 1;
		}
	}
	sort();
	for (int i = 0; i < 8; i++)
	{
		
		teams[i]->display();
	}
	cout << "\t\t\t===========================Players Ranking===========================" << endl;
	cout << setw(40) << "Name | " << setw(30) << "Points | " << "Team" << endl;
	for (int i = 0; i < 88; i++)
	{
		playerStat[i].display();
	
	}
}
