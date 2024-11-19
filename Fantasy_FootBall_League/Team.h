#pragma once
#ifndef Team_H
#define Team_H
#include"Player.h"
#include"TeamStatistics.h"
class Team
{
	int numCount;
	char* name;
	int teamNumber;
	int wins;
	int lose;
	int draws;
	static int count;
	char lastResult[5];
	Player* players[11];
	TeamStatistics statistics;
public:
	Team();
	Team(const char* name, Player** player);
	const char* getName();
	int getNumber();
	int getWins();
	int getDraws();
	void recordGame(char result, int goalsFor, int goalsAgainst);
	void addGoalsToPlayer(int playerIndex, int numGoals);
	void display();
	void addMatches();
	Player** getPlayers();
};
#endif

