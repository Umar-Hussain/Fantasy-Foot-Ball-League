#pragma once
#ifndef  Player_h
#define Player_h
#include"PlayerStatistics.h"
class Player
{
	 char* name;
	int age;
	char* position;
	PlayerStatistics statistics;
public:
	Player();
	void operator=(const Player& p);
	Player(const char* name, int age);
	Player(const char* name, int age, const char* position, int gamesPlayed, int goalScored, int assistMade, int tackles, int interceptions, int skillRatings);
	 char* getName();
	 char* getPosition();
	void setPosition(const char* ptr);
	int getGamesPlayed();
	int getGoalsScored();
	int getAssistMade();
	int getTackles();
	int getInterceptions();
	int getSkillRatings();
	void setGamesPlayed(int);
	void setGoalsScored(int);
	void setAssistMade(int);
	void setTackles(int);
	void setInterceptions(int);
	void setSkillRatings(int);
	void resetStatistics();
	void display();

};

#endif // ! Player_h


