#include <iostream>

using namespace std;

main(){
int a, b, c, d, e, f, g;
	cout<<"enter your salary amount:";
	cin>>a;
	 if (a < 6000000){
		cout<<"you are exempt from paying taxes ;)";
	}
	 else if(a >= 6000000 && a < 8000000 ){
	     b = a * 5 / 100;
	     b = a - b;
	     cout<<"the amount of your salary after deducting 5% tax:"<<b;
	}
	 else if(a >= 8000000 && a < 10000000){
	 	 c = a * 10 / 100;
	 	 c = a - c;
	 	 cout<<"the amount of your salary after deducting 10% tax:"<<c;
	}
	 else if(a >= 10000000 && a < 14000000){
	 	 d = a * 15 / 100;
	 	 d = a - d;
	 	 cout<<"the amount of your salary after deducting 15% tax:"<<d;
	 }
	  else if(a >= 14000000 && a < 18000000){
	 	 e = a * 20 / 100;
	 	 e = a - e;
	 	 cout<<"the amount of your salary after deducting 20% tax:"<<e;
	 }
	  else if(a >= 18000000 && a < 25000000){
	 	 f = a * 25 / 100;
	 	 f = a - f;
	 	 cout<<"the amount of your salary after deducting 25% tax:"<<f;
}
      else if(a > 25000000){
      	 g = a * 35 / 100;
      	 g = a - g;
      	 cout<<"the amount of your salary after deducting 35% tax:"<<g;
	  }
}
