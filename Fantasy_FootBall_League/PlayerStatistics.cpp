#include "PlayerStatistics.h"
#include<iostream>
using namespace std;
PlayerStatistics::PlayerStatistics()
{
	this->gamesPlayed = 0;
    this-> assistMade = 0;
	this->goalScored = 0;
	this->interceptions = 0;
	this->skillRatings=0;
	this->tackles = 0;
}
PlayerStatistics::PlayerStatistics(int gamesPlayed, int goalScored, int assistMade, int tackles, int interceptions, int skillRatings)
{
	this->gamesPlayed = gamesPlayed;
	this->assistMade = assistMade;
	this->goalScored = goalScored;
	this->interceptions = interceptions;
	this->skillRatings = skillRatings;
	this->tackles = tackles;
}
//Getters
int PlayerStatistics::getGamesPlayed()
{
	return gamesPlayed;
}
int PlayerStatistics::getSkillRatings()
{
	return skillRatings;
}
int PlayerStatistics::getInterceptions()
{
	return interceptions;
}
int PlayerStatistics::getGoalsScored()
{
	return goalScored;
}
int PlayerStatistics:: getAssistMade()
{
	return assistMade;
}
int PlayerStatistics:: getTackles()
{
	return tackles;
}
//Setters
void PlayerStatistics::setAssistMade(int n)
{
	assistMade += n;

}
void PlayerStatistics::setGoalsScored(int n)
{
	goalScored += n;

}
void PlayerStatistics::setSkillRatings(int n)
{
	skillRatings= n;
}
void PlayerStatistics::setTackles(int n)
{
	tackles += n;
}
void PlayerStatistics::setInterceptions(int n)
{
	interceptions += n;
}
void PlayerStatistics::setGamesPlayed(int n)
{
	gamesPlayed += n;
}
//Reset
void PlayerStatistics::resetStatistics()
{
	this->gamesPlayed = 0;
	this->assistMade = 0;
	this->goalScored = 0;
	this->interceptions = 0;
	this->skillRatings = 0;
	this->tackles = 0;

}
void PlayerStatistics::display()
{
	
	cout << "\'Games Played\' : " << gamesPlayed;
	cout << ", \'Assists\' : " << assistMade;
	cout << ", \'Goals Scored\' : " << goalScored;
	cout << ", \'Interceptions\' : " << interceptions << endl;
	cout << ", \'Skills Rating\' : " << skillRatings;
	cout << ", \'Tackles\' : " << tackles <<" }" << endl;
}