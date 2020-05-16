#include <bits/stdc++.h>
using namespace std;

int main() {
	int t,n,i,j,b,x;
	cin>>t;
	
	for(i=0;i<t;i++){
	    cin>>n;
	    int a[n];
	    vector<int> v;
	    
	    for(j=0;j<n;j++)
	    cin>>a[j];
	    
	    x=1;
	    
	    for(j=1;j<n;j++){
	        if(a[j]-a[j-1]>2){
	            v.push_back(x);
	            x=1;
	        }
	        else{
	            x++;
	            if(j==n-1)
	            v.push_back(x);
	            
	        }
	        if(a[n-1]-a[n-2]>2)
	        v.push_back(1);
	        
	    }
	    sort(v.begin(),v.end());
	    int c = v.size();
	    cout<<v[0]<<" "<<v[c-1]<<endl;
	   
	    
	}
	
	
	return 0;
}
