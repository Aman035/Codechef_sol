#include<bits/stdc++.h>
# define mp make_pair
# define pb push_back
# define pp pair<int,int>
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define M 1000000007
using namespace std;
struct vehicle{
	string no;
	int type;
	int way;
	int amt;
	string intime;
	string outtime;
	string date;
};

int main()
{
	cout<<"**********Toll Bridge Data Entry*****************\n";

	ll money,w4,w2;
	money = w2 =w4 =0;

	vector<vehicle>v;
	while(1)
	{
		int c;
		cout<<"\nPress 1 for entering vehicle data : Press 0 for exiting\n";
		cin>>c;
		if(!c)
		break;
		int type;
		cout<<"Press 4 for entering 4 wheeler's vehicle's data : Press 2 for entering 2 wheeler vehicle's data\n";
		cin>>type;
		vehicle t;
		if(type == 4)
			t.type = 4,w4++;
		else
		{
			if(type == 2)
				t.type = 2,w2++;
			else
			{
				cout<<"Not a valid option!\n";
				continue;
			}
		}
		cout<<"Enter vehicle no. {FORMAT : RJAB1010}\n";
		cin>>t.no;
		cout<<"Enter Date of passage {FORMAT : DD-MM-YYYY}\n";
		cin>>t.date;
		cout<<"Press 1 for 1 way : Press 2 for 2 way trip\n";
		cin>>t.way;

		if(t.way == 2)
		{
			if(t.type == 4)
			t.amt = 500;
			else
			t.amt = 350;
			cout<<"Enter Intime {FORMAT : HH-MM  (24 HOUR FORMAT)}\n";
			cin>>t.intime;
			cout<<"Enter Outtime {FORMAT : HH-MM  (24 HOUR FORMAT)}\n";
			cin>>t.outtime;
		}	
		else
		{
			if(t.type == 4)
			t.amt = 350;
			else
			t.amt = 200;
			cout<<"Enter Intime {FORMAT : HH-MM  (24 HOUR FORMAT)}\n";
			cin>>t.intime;
			t.outtime = "None";
		}
		v.pb(t);
		money+=t.amt;
		cout<<"Vehicle Entered successfully\n\n\n";
	}

	cout<<"Total vehicle Passed : "<<v.size()<<"\n";
	cout<<"Total Money Collection : "<<money<<"\n";
	cout<<"Total 4 wheelers vehicles: "<<w4<<"\n";
	cout<<"Total 2 wheelers vehicles: "<<w2<<"\n\n\n";


	cout<<"***************Toll Bridge Searching System***************\n";
	while(1)
	{
		int c;
		cout<<"\nPress 1 for Searching Vehicle : Press 0 for exiting\n";
		cin>>c;
		if(!c)
		break;
		string s;
		cout<<"Enter the vehile no. to be searched\n";
		cin>>s;
		int flag=1;
		for(int i=0;i<v.size();i++)
		{
			if(v[i].no == s)
			{
				flag=0;
				cout<<"Vehicle No. :"<<v[i].no<<"\n";
				cout<<"Vehicle type :"<<v[i].type<<" wheeler\n";
				cout<<"Fare type :"<<v[i].way<<" way\n";
				cout<<"Date of Fare :"<<v[i].date<<"\n";
				cout<<"Intime :"<<v[i].intime<<"\n";
				cout<<"Outtime :"<<v[i].outtime<<"\n\n\n";
				break;
			}
		}
		if(flag)
			cout<<"Vehicle Not Found in system\n\n\n";
		
	}
	
	return 0;
}