#pragma once
class PlayerStatistics
{
private:
	int gamesPlayed;
	int goalScored;
	int assistMade;
	int tackles;
	int interceptions;
	int skillRatings;
public:
	PlayerStatistics();
	PlayerStatistics(int gamesPlayed, int goalScored, int assistMade, int tackles, int interceptions, int skillRatings);
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

