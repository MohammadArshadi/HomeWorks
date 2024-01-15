#include<iostream>

using namespace std;

int main(){
        int m, n;
        int t=1;
           cout<<"please enter a number:";
            cin>>m;
           cout<<"please again enter a number:";
            cin>>n;
        for(int i=1;i<=n;i++){
		    t= t * m;
		   }
        
        cout<<t;

}

