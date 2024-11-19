#pragma once
#include"Season.h"
#include"String.h"
#include<iostream>
#include<iomanip>
using namespace std;
struct  PlayerStats
{
	char* name;
	char* teamName;
	int points;
	PlayerStats()
	{
	}
	void operator=(PlayerStats& p)
	{
		copyStrings(p.name, name);
		copyStrings(p.teamName, teamName);
		points = p.points;
	}
	PlayerStats(PlayerStats& p)
	{
		copyStrings(p.name, name);
		copyStrings(p.teamName, teamName);
		points = p.points;
	}
	void display()
	{
		cout << setw(40) << name << " | " << setw(30) << points << " | " << teamName << endl;
	}
	/*void setName(const char *ch)
	{
		copyStrings(ch, name);

	}
	void setTeamName(const char* ch)
	{
		copyStrings(ch, teamName);
	}
	void setPoints(int tackles, int interceptions, int assists, int goals)
	{
		this->points = tackles + interceptions + assists + goals;
	}
	int getPoints()
	*/
};
class Award
{
	PlayerStats playerStat[88];
	Season* season;
public:
	Award(Season *s);
	void display();
	void sort();
};

