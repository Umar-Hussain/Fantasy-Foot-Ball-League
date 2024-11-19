#include "TeamStatistics.h"
TeamStatistics::TeamStatistics()
{
	gamesPlayed = 0;
	points = 0;
	history[0] = 0;
	goals[0] = 0;
}
TeamStatistics::TeamStatistics(int gamesPlayed, int points, int history[3], int goals[3], char* lastFiveResults)
{
	this->gamesPlayed = gamesPlayed;
	this->points = points;
	for (int i = 0; i < 3; i++)
		this->history[i] = history[i];
	for (int i = 0; i < 3; i++)
		this->goals[i] = goals[i];
	this->lastFiveResults = new char[5];
	int i = 0;
	while (lastFiveResults[i] != '\0')
	{
		this->lastFiveResults[i] = lastFiveResults[i];
		i++;
	}
}
//getters
int TeamStatistics::getGamesPlayed()
{
	return gamesPlayed;
}

int* TeamStatistics::getGoals()
{
	return goals;
}
int TeamStatistics::getPoints()
{
	return points;

}
int* TeamStatistics::getHistory()
{
	return history;
}