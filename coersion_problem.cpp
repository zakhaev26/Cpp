#include<iostream>


using namespace std;

int main(){

int a,b,c;
cout<<"Enter num1:\n";
cin>>a;
cout<<"Enter num2:\n";
cin>>b;
cout<<"Enter num3:\n";
cin>>c;

double sum = (a+b+c)/static_cast<double>(3);
double avg =sum/3;

cout<<"Num 1: "<<a<<endl;
cout<<"Num 2: "<<b<<endl;
cout<<"Num 3: "<<c<<endl;

cout<<"The sum is : "<<sum<<endl;
cout<<"The avg is : "<<avg<<endl;
return 0;
}