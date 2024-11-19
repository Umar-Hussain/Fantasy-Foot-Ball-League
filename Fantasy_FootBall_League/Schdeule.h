#pragma once
class Schedule
{
	int** gamesSchedule;
	int numWeeks;
	int gamesPerWeek;
	int numTeams;
public:
	Schedule();
	Schedule(int nuTeams);
	void display();
	void schedule();
	bool isValidMatchup(int* teams, int week);
	int getGames(int, int);
};

