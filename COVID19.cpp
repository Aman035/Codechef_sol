#include<bits/stdc++.h>
using namespace std;

int main() {
	
	int t;
	cin>>t;
	while(t--)
	{
	    long int n;
	    cin>>n;
	    long int A[n];
	    long int infectmin=INT_MAX;
	    long int infectmax=1;
	    long int k=1;
	    
	    for(long int i=0;i<n;i++)
	    cin>>A[i];
	    
	    for(long int i=0;i<n-1;i++)
	    {
	        if(A[i+1]-A[i]<=2)
	            k++;
	        else
	        {
	            if(infectmin>k)
	            infectmin=k;
	            if(infectmax<k)
	            infectmax=k;
	            k=1;
	        }
	    }
	    
	         if(infectmin>k)
	            infectmin=k;
	            
            if(infectmax<k)
	            infectmax=k;
	    
	    cout<<infectmin<<" "<<infectmax<<"\n";
	    
	}
	return 0;
}
