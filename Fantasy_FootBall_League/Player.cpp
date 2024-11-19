

#include "Player.h"
#include"String.h"
#include<iostream>
using namespace std;
Player::Player()
{
	this->age = 0;
	name = nullptr;
	position = nullptr;
}

void Player::operator=(const Player& p)
{
	this->age = p.age;
	copyStrings(p.name, this->name);
	copyStrings(p.position, this->position);

}
Player::Player(const char *name, int age)
{
	if (age < 18) {
		cout << "The Player is not old enough to be eligible for the team (Enter age again) " << endl;
		cin >> age;
	}
	this->age = age;

	copyStrings(name, this->name);
	
}
Player::Player(const char* name, int age, const char * position, int gamesPlayed, int goalScored, int assistMade, int tackles, int interceptions, int skillRatings):
	statistics( gamesPlayed,  goalScored, assistMade,  tackles,  interceptions,  skillRatings)
{

	this->age = age;
	copyStrings(name, this->name);
	copyStrings(position, this->position);
}

 char* Player::getName()
{
	return name;
}
 char* Player::getPosition()
{
	return position;
}

int Player::getGamesPlayed()
{
	return statistics.getGamesPlayed();
}
int Player::getSkillRatings()
{
	return statistics.getSkillRatings();
}
int Player::getInterceptions()
{
	return statistics.getInterceptions();
}
int Player::getGoalsScored()
{
	return statistics.getGoalsScored();
}
int Player::getAssistMade()
{
	return statistics.getAssistMade();
}
int Player::getTackles()
{
	return statistics.getTackles();
}
//Setters
void Player::setPosition(const char* pos)
{
	copyStrings(pos, this->position);
}
void Player::setAssistMade(int n)
{
	statistics.setAssistMade(n);

}
void Player::setGoalsScored(int n)
{
	statistics.setGoalsScored(n);

}
void Player::setSkillRatings(int n)
{
	statistics.setSkillRatings(n);
}
void Player::setTackles(int n)
{
	statistics.setTackles(n);

}
void Player::setInterceptions(int n)
{
	statistics.setInterceptions(n);
}
void Player::setGamesPlayed(int n)
{
	statistics.setGamesPlayed(n);
}
//reset
void Player::resetStatistics()
{
	statistics.resetStatistics();
}
void Player::display()
{
	cout << name << " :{ ";
	statistics.display();
	cout << endl;
}