#include "Schdeule.h"
#include<time.h>
#include <stdlib.h>
#include<iostream>
void randomizeTeams(int* teams, int size);
using namespace std;
Schedule::Schedule()
{
	this->gamesPerWeek = 2;
	this->numWeeks = 0;
	this->numTeams = 2;
	gamesSchedule = nullptr;
	//gamesSchedule = new int* [8];

}
Schedule::Schedule(int nuTeams)
{
	srand(time(0));
	this->numTeams = nuTeams;
	this->gamesPerWeek = 2;
	numWeeks = numTeams;
	this->gamesSchedule = new int*[numWeeks];
	for (int j = 0; j < numWeeks; j++)
	{
		gamesSchedule[j] = new int[gamesPerWeek*2];
		for (int i = 0; i < 2; i++)
			gamesSchedule[j][i] = 0;
	}
	schedule();

}
void Schedule::schedule()
{

	// To generate the schedule week 1 , 2 games per week (first 4 teams in the odd weeks) and the other in the even weeks
	srand(time(0));

	for (int week = 0; week < numWeeks; ++week) {
		int teams[4];

		if (week % 2 == 0) {
			teams[0] = 0;
			teams[1] = 1;
			teams[2] = 2;
			teams[3] = 3;
		}
		else {
			teams[0] = 4;
			teams[1] = 5;
			teams[2] = 6;
			teams[3] = 7;
		}

		randomizeTeams(teams, 4);

		
		while (!isValidMatchup(teams, week)) {
			randomizeTeams(teams, 4);  
		}

		
		gamesSchedule[week][0] = teams[0];
		gamesSchedule[week][1] = teams[1];
		gamesSchedule[week][2] = teams[2];
		gamesSchedule[week][3] = teams[3];


	}
}
int Schedule::getGames(int i, int j)
{


	return gamesSchedule[i][j];
}
void Schedule::display()
{
	for (int i = 0; i < numWeeks; i++)
	{
		cout << "Week " << i + 1 << " game : " << endl;
		for (int j = 0; j < numTeams / 2; j+=2)
		{
			cout << "Team " << gamesSchedule[i][j]+1 << " vs " << gamesSchedule[i][j + 1]+1 << endl;;

		}
	}
}
void randomizeTeams(int* teams, int size) {
	for (int i = 0; i < size; ++i) {
		int randIndex = rand() % size;

	
		int temp = teams[i];
		teams[i] = teams[randIndex];
		teams[randIndex] = temp;
	}
}
bool Schedule:: isValidMatchup(int* teams, int week) {
	
	
	if (teams[0] == teams[1] || teams[2] == teams[3]) return false;

	if (week > 0) {
		if ((gamesSchedule[week - 1][0] == teams[0] && gamesSchedule[week - 1][1] == teams[1]) ||
			(gamesSchedule[week - 1][2] == teams[2] && gamesSchedule[week - 1][3] == teams[3]) ||
			(gamesSchedule[week - 1][0] == teams[2] && gamesSchedule[week - 1][1] == teams[3]) ||
			(gamesSchedule[week - 1][2] == teams[0] && gamesSchedule[week - 1][3] == teams[1])) {
			return false;
		}
	}

	return true;
}
