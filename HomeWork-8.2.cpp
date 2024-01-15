#include<iostream>

using namespace std;

int main(){
	int a[5], b[5], c, d;
	cout<<"Enter number, then click enter until the number of your numbers reaches 5:"<<"\n";
	for(int i=0;i<5;i++){
		cin>>a[i];
		}
	cout<<"again Enter number, then click enter until the number of your numbers reaches 5:"<<"\n";
		for(int i=0;i<5;i++){
			cin>>b[i];
		}
	for(int i=0;i<5;i++){
        c=a[i];
        a[i]=b[i];
        b[i]=c;
        cout<<"your frist numbers:"<<"\n"<<b[i]<<"\n";
        cout<<"your second numbers:"<<"\n"<<a[i]<<"\n";
}
			

}
