#include<bits/stdc++.h>

using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int n;
		cin>>n;
		long int a,b,chef=0,morty=0;
		for(long int i=0;i<n;i++) {
			cin>>a>>b;
			long int suma=0,sumb=0;
			while(a) {
				suma+=a%10;
				a/=10;
			}
			while(b) {
				sumb+=b%10;
				b/=10;
			}
			if(suma>=sumb)
				chef++;
			if(sumb>=suma)
				morty++;
		}
		if(chef>morty) {
			cout<<"0"<<" "<<chef;
		}
		else if(morty>chef) {
			cout<<"1"<<" "<<morty;
		}
		else
			cout<<"2"<<" "<<chef;
		cout<<"\n";
	}
}