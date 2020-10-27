#include<bits/stdc++.h>
# define mp make_pair
# define pb push_back
# define pp pair<int,int>
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define M 1000000007
using namespace std;
int main()
{
	string TeamA[6],TeamB[6];
	cout<<"Enter Team A players\n";
	for(int i=0;i<6;i++)
		cin>>TeamA[i];
	cout<<"Enter Team B players\n";
	for(int i=0;i<6;i++)
		cin>>TeamB[i];

	cout<<"\nInnings 1 starts : Team A is Batting : Team B is Bowling\n";
	int TeamAPlayer = rand()%6;
	int TeamBPlayer = rand()%6;

	cout<<"Team A's Player Batting : "<<TeamA[TeamAPlayer]<<"\n";
	cout<<"Team B's Player Bowling : "<<TeamB[TeamBPlayer]<<"\n";

	int TeamARuns=0;
	for(int i=0;i<6;i++)
	{
		int eachbowl = rand()%7;

		cout<<"Runs scored at Bowl "<<i+1<<" :"<<eachbowl<<"\n";
		TeamARuns+=eachbowl;
	}

	cout<<"Total Runs Scored by Team A : "<<TeamARuns<<"\n";


	cout<<"\nInnings 2 starts : Team B is Batting : Team A is Bowling\n";
	TeamAPlayer = rand()%6;
	TeamBPlayer = rand()%6;

	cout<<"Team A's Player Bowling : "<<TeamA[TeamAPlayer]<<"\n";
	cout<<"Team B's Player Batting : "<<TeamB[TeamBPlayer]<<"\n";

	int TeamBRuns=0;
	for(int i=0;i<6;i++)
	{
		int eachbowl = rand()%7;

		cout<<"Runs scored at Bowl "<<i+1<<" :"<<eachbowl<<"\n";
		TeamBRuns+=eachbowl;
	}

	cout<<"Total Runs Scored by Team B : "<<TeamBRuns<<"\n";

	if(TeamARuns>TeamBRuns)
		cout<<"\nThus Team A wins!";
	else
	{
		if(TeamBRuns>TeamARuns)
			cout<<"\nThus Team B wins!";
		else
			cout<<"\nMatch is Tied!";
	}	
	return 0;
}