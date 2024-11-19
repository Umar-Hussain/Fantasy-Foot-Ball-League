#include<iostream>
using namespace std;
#include"Team.h"
#include"Schdeule.h"
#include"Player.h"
#include"Season.h"
#include"Award.h"

int main()
{
    const char* playerNames[88] = {
    "Lionel Messi", "Cristiano Ronaldo", "Neymar Jr.", "Kylian Mbappe",
    "Robert Lewandowski", "Kevin De Bruyne", "Mohamed Salah", "Erling Haaland",
    "Karim Benzema", "Harry Kane", "Virgil van Dijk", "Luka Modric",
    "Sergio Ramos", "Alisson Becker", "Jan Oblak", "Manuel Neuer",
    "Marc-Andre ter Stegen", "Thibaut Courtois", "Paulo Dybala", "Bruno Fernandes",
    "Son Heung-Min", "Jadon Sancho", "Timo Werner", "Phil Foden",
    "Declan Rice", "Jack Grealish", "Raheem Sterling", "Mason Mount",
    "Bernardo Silva", "Joao Cancelo", "Andrew Robertson", "Trent Alexander-Arnold",
    "Jordan Henderson", "Fabinho", "Giorgio Chiellini", "Leonardo Bonucci",
    "Romelu Lukaku", "Ciro Immobile", "Memphis Depay", "Zlatan Ibrahimovic",
    "Kai Havertz", "Christian Pulisic", "Hakim Ziyech", "Marco Verratti",
    "Federico Chiesa", "Dusan Vlahovic", "Matthijs de Ligt", "Dayot Upamecano",
    "Eden Hazard", "Thomas Muller", "Kingsley Coman", "Serge Gnabry",
    "Joshua Kimmich", "David Alaba", "N'Golo Kante", "Eduardo Camavinga",
    "Pedri", "Gavi", "Jules Kounde", "Raphael Varane",
    "Paul Pogba", "Antoine Griezmann", "Ousmane Dembele", "Ansu Fati",
    "Gerard Moreno", "Ferran Torres", "Alvaro Morata", "Rodri",
    "Sergio Busquets", "Aymeric Laporte", "Pau Torres", "Thiago Alcantara",
    "Diego Jota", "Ruben Dias", "Joao Felix", "Renato Sanches",
    "Yannick Carrasco", "Youri Tielemans", "Dries Mertens", "Kevin Volland",
    "Lucas Hernandez", "Benjamin Pavard", "Presnel Kimpembe", "Wilfred Ndidi",
    "Victor Osimhen", "Ismaila Sarr", "Kalidou Koulibaly", "Achraf Hakimi"
    };
    const char* teamNames[8] = {
    "Manchester United", "Barcelona", "Bayern Munich", "Liverpool",
    "Paris Saint-Germain", "Real Madrid", "Chelsea", "Juventus"
    };
    int playerAges[88] = {
    24, 29, 22, 25, 30, 27, 21, 26,
    23, 28, 30, 20, 19, 25, 26, 24,
    27, 22, 29, 21, 23, 24, 30, 28,
    20, 19, 26, 25, 21, 22, 29, 24,
    30, 23, 27, 26, 22, 20, 19, 28,
    23, 29, 24, 25, 21, 27, 26, 30,
    19, 20, 23, 22, 25, 28, 24, 29,
    26, 21, 30, 27, 19, 22, 23, 24,
    28, 26, 25, 30, 21, 27, 22, 19,
    24, 29, 20, 25, 21, 30, 26, 23,
    27, 28, 20, 19, 22, 30, 24, 25
    };
    Player* players[88];
    Team* teams[8];
    for (int i = 0; i < 88; i++)
    {
        players[i] = new Player{ playerNames[i],playerAges[i] };
    }
    for (int i = 0; i < 8; i++)
    {
        teams[i] = new Team{teamNames[i],players};
    }
    /*for (int i = 0;i < 8; i++)
    {
        teams[i]->display();
    }*/
    Season s1{teams,8};
    s1.simulateAndDisplayResults();
    s1.displayLeaderboard();
    Award a1(&s1);
    a1.display();
    /*for (int i = 0; i < 88; i++)
    {
        players[i]->display();
    }*/
   /* for (int i = 0;i < 8; i++)
    {
        teams[i]->display();
    }*/
}

