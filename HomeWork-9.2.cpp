#include<iostream>

using namespace std;

int main(){
	int a[10]={5,85, 69, 125, 100, 1235, 999, 15, 74, 1238};
	int min=a[0];
	int min1=a[0];
	for(int i=0;i<10;i++){
		if(a[i]<min)
			min=a[i];
		
		if(a[i]<min1 && a[i]> min)
			min1=a[i];
	
	}
	cout<<min1;
}
