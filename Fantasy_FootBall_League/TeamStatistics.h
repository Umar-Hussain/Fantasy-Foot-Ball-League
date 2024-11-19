#pragma once
class TeamStatistics
{
private:
	int gamesPlayed;
	int points;
	int history[3];//wins/draws/loses
	int goals[3];//goals for/against/difference
	char* lastFiveResults;
public:
	TeamStatistics();
	TeamStatistics(int gamesPlayed,int points, int history[3],int goals[3], char* lastFiveResults);
	int getGamesPlayed();
	int getPoints();
	int* getHistory();
	int* getGoals();
	char* getLastFiveResults();

	void setPoints(int);
	void SetGamesPlayed(int);
	void setHistory(int *);
	void setGoals(int*);
	void setLastFiveResults(char c);
};

