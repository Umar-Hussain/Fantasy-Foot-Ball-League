#pragma once
#include"Team.h"
#include"Schdeule.h"
class Season
{
	Team* teams[8];
	int numTeams;
	Schedule sh;
public:
	Season();
	Season(Team** teams, int numTeam);
	void simulateAndDisplayResults();
	void displayLeaderboard();
	Team** getTeams();
	
};

