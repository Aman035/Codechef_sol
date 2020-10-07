#include<bits/stdc++.h>
#define size 100000000

using namespace std;
unsigned long long int ar[100000000] = {0};

void cutPiece()
{
	ar[0] = 0;
	ar[1] = 2;
	for(long int i=2; i<=size; i++)
		ar[i] += ar[i-1] + i;
}

int main()
{
	cutPiece();
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		cout<<ar[n]<<"\n";
	}
}