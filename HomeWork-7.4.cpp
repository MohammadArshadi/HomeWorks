#include <iostream>

using namespace std;

int main(){
	int m, n, k, a, i;
	cout<<"plrase enter number:";
	 cin>>m;
	cout<<"please again enter a number:";
	 cin>>n;
	 
	if(n>m){
		a=n;
		n=m;
		m=a;
	}
	
	for(i=1;i<=n;i++){
		if(m%i==0 && n%i==0){
			k=i;
		}
	}
	cout<<k;
}
