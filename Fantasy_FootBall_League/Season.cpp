#include "Season.h"
#include"Team.h"
#include<iostream>
#include<iomanip>
using namespace std;
Season::Season()
{  
    

    numTeams = 0;
}
Season::Season(Team** teams, int num):sh(8)
{
	this->numTeams = num;
	for (int i = 0; i < num; i++)
	{
		this->teams[i] = teams[i];
	}
}
void Season::simulateAndDisplayResults() {
    cout << "Simulating Matches and Results:\n";
    cout << "-----------------------------------\n";

    for (int week = 0; week <8; week++) {
        cout << "Week " << week + 1 << ":\n";

        for (int i = 0; i < 2; i++) {
            int team1Index = sh.getGames(week, i * 2);
            int team2Index = sh.getGames(week, i * 2 + 1);

          
            int goalsTeam1 = rand() % 5+1;
            int goalsTeam2 = rand() % 5+1;
            int g1 = goalsTeam1 / 2;
            int g2 = goalsTeam1 - g1;
            int g3 = goalsTeam2 / 2;
            int g4 = goalsTeam2 - g3;
            teams[team1Index]->addGoalsToPlayer(0, g1); 
            teams[team1Index]->addGoalsToPlayer(4, g2); 
            teams[team2Index]->addGoalsToPlayer(0, g3); 
            teams[team2Index]->addGoalsToPlayer(4, g4); 
            teams[team1Index]->addMatches();
            teams[team2Index]->addMatches();
            cout << teams[team1Index]->getName() << " (" << goalsTeam1 << ") vs "
                << teams[team2Index]->getName() << " (" << goalsTeam2 << ")\n";
            if (goalsTeam1 > goalsTeam2)
            {
                cout << teams[team1Index]->getName() << " won."<<endl;
            }
            else
            {
                cout << teams[team2Index]->getName() << " won." << endl;
            }
            
            if (goalsTeam1 > goalsTeam2) {
                teams[team1Index]->recordGame('W', goalsTeam1, goalsTeam2);
                teams[team2Index]->recordGame('L', goalsTeam2, goalsTeam1);
            }
            else if (goalsTeam1 < goalsTeam2) {
                teams[team1Index]->recordGame('L', goalsTeam1, goalsTeam2);
                teams[team2Index]->recordGame('W', goalsTeam2, goalsTeam1);
            }
            else {
                teams[team1Index]->recordGame('D', goalsTeam1, goalsTeam2);
                teams[team2Index]->recordGame('D', goalsTeam2, goalsTeam1);
            }
        }

        cout << "-----------------------------------\n";
       /* cout << "Week Completed.. Press Any key to continue to next week..." << endl;
        getchar()*/;
    }
}
void Season::displayLeaderboard() {
  
    for (int i = 0; i < numTeams - 1; i++) {
        for (int j = i + 1; j < numTeams; j++) {
            int pointsI = teams[i]->getWins() * 3 + teams[i]->getDraws();
            int pointsJ = teams[j]->getWins() * 3 + teams[j]->getDraws();
            if (pointsJ > pointsI) {
                swap(teams[i], teams[j]);
            }
        }
    }

   
    cout << "Leaderboard:\n";
    cout << "-----------------------------------\n";
    cout << "Rank | Team Name            | Points\n";
    cout << "-----------------------------------\n";
    for (int i = 0; i < numTeams; i++) {
        cout << i + 1 << " |" << " " << setw(30) << teams[i]->getName() << " |" << teams[i]->getWins() << endl;;
    }
    cout << "-----------------------------------\n";
}
Team** Season::getTeams()
{
    return teams;
}
