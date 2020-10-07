#include<bits/stdc++.h>

using namespace std;

int main() 
{
	int t;
	cin>>t;
	while(t--)
	{
		long int n;
		cin>>n;
		long int a[200000]={0}, b[200000]={0},sum=0,na=0,nb=0,q;
		long int A,B,fg=0;
		vector<long int> va,vb;
		for(long int i=0;i<n;i++)
		{
			cin>>A;
			a[A-1]++;
		}
		for(long int i=0;i<n;i++)
		{
			cin>>B;
			b[B-1]++;
		}

		for(long int i=0;i<10000;i++)
		{
			if(a[i]==b[i])
				continue;
			if(abs(a[i] - b[i])%2 != 0)
			{
				fg=1;
				break;
			}
			if(a[i]>b[i])
			{
				q=abs(a[i] - b[i])/2;
				na+=q;
				for(int j=0;j<q;j++)
					va.push_back(i+1);
			}
			if(b[i]>a[i])
			{
				q=abs(b[i] - a[i])/2;
				nb+=q;
				for(int j=0;j<q;j++)
					vb.push_back(i+1);
			}
		}
		int size = va.size();
		if(na!=nb)
			fg=1;
		if(fg==0 && (na>0 || nb>0))
		{
			for(long int i=0,j=size-1; i<size; i++,j--)
				sum+=min(va[i],vb[j]);
		}
		if(fg!=0)
			cout<<"-1"<<"\n";
		else if(fg==0)
			cout<<sum<<"\n";
	}
}