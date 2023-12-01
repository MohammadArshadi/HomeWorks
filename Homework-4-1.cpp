#include <iostream>
using namespace std;

main(){
float m , n;
cout<<"please enter number1:";
cin>>m;
cout<<"please enter number2:";
cin>>n;
float s= m + n;
float t= m - n;
float x= m * n;
float b=(int) m % (int)n;
cout<<"N1+N2="<<s<<"\n"<<"N1-N2="<<t<<"\n"<<"N1*N2="<<x<<"\n"<<"N1%N2="<<b;
}
