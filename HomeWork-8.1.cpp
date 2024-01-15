#include<iostream>

using namespace std;

int main(){
	int num[10];
	int max, min;
	 cout<<"Enter number, then click enter until the number of your numbers reaches 10:"<<"\n";
	 for(int i=0;i<10;i++){
	 	
	cin>>num[i];
	 }
	 max=num[0];
	 min=num[0];
	 for(int i=0;i<10;i++){
	 	if(num[i]>max){
	 		max=num[i];
		 }
		 if(num[i]<min){
		 	min=num[i];
		 }
		 
	 }
	 cout<<"max number: "<<max<<"\n";
		 cout<<"min number: "<<min;
}
