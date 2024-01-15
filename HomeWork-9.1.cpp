#include<iostream>
#define array 10

using namespace std;

int main(){
	int a[array]={1,6,11,15,18,23,29,30,41}, b;
	cout<<"enter a number:";
	cin>>a[9];
	for(int i=1;i<array;++i){
		for(int j=0;j<(array-i);++j){
			if(a[j]>a[j+1]){
				b=a[j];
				a[j]=a[j+1];
				a[j+1]=b;
			}
		}
	}
	for(int i=0;i<10;i++){
		cout<<a[i]<<" ";
	}
}
