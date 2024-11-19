
#include "Team.h"
#include"String.h"

#include<iostream>
using namespace std;
int Team::count = 1;

Team::Team()
{
	wins = 0;
	lose = 0;
	draws = 0;
}
Team::Team(const char* name,Player **players)
{
	numCount = 0;
	for (int i = 0; i < 5; i++)
	{
		lastResult[i] = '\0';
	}
	wins = 0;
	lose = 0;
	draws = 0;
	teamNumber = count;
	count++;
	static int num = 0;
	copyStrings(name, this->name);
	
	for (int i=0; i < 11; i++)
	{

		this->players[i] = players[num++];
		
		if (i == 0 || i == 3 || i == 6)
		{
			players[i]->setPosition("Goal Keeper");
		}
		else if (i == 5 || i == 8)
		{
		    players[i]->setPosition("Defender");
		}
		else if (i == 2 || i == 7 || i == 9)
		{
			players[i]->setPosition("Mid Fielders");
		}
		else if (i == 1 || i == 4)
		{
			players[i]->setPosition("Striker");
		}
	}
}
const char* Team::getName()
{
	return name;

}
int Team::getNumber()
{
	return teamNumber;
}
void Team::recordGame(char result, int goalsFor, int goalsAgainst) {
	
	{
	if (this->numCount >= 5)
	{
		numCount -= 5;
	}
	this->lastResult[numCount++] = result;
}
	if (result == 'W') {
		wins++;
	}
	else if (result == 'L') {
		lose++;
	}
	else if (result == 'D') {
		draws++;
	}
}
void Team::addGoalsToPlayer(int playerIndex, int numGoals) {
	if (playerIndex >= 0 && playerIndex < 11) {
		players[playerIndex]->setGoalsScored(numGoals);
	}
}
int Team::getWins() {
	return wins;
}

int Team::getDraws()  {
	return draws;
}
void Team::display()
{
	cout << "-------------------------------" << name << "-------------------------------" << endl;
	cout << "Last Five Results : ";
	for (int i = 0; i < 5; i++)
	{
		if (lastResult[i] != '\0')
			cout << lastResult[i] << " ";
	}
	cout << endl;
	for (int i = 0; i < 11; i++)
	{
		players[i]->display();
	}
	
}
Player** Team::getPlayers()
{
	return players;
}
void Team::addMatches()
{
	srand(time(0));
	for (int i = 0; i < 11; i++)
	{
		players[i]->setGamesPlayed(1);
		players[i]->setAssistMade(rand() % 2 + 1);
		players[i]->setInterceptions(rand() % 2 + 1);
		players[i]->setSkillRatings(rand() % 30 + 70);
		players[i]->setTackles(rand() % 2 + 1);
	}
}
