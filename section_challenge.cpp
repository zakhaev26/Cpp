#include<iostream>

using namespace std;

int main(){
    int cents;
    cout<<"Enter the amount in cents:";
    cin>>cents;

    //1 dollar =100 cents
    // 1 quarter =25 cents
    //1 dime = 10 cents
    //1 nickel =5 cents
    //1 penny =1cents

    int dollar = cents/100;
    int quarter = (cents%100)/25;
    int dime = ((cents%100)%25)/10;
    int nickel =(((cents%100)%25)%10)/5;
    int penny =((((cents%100)%25)%10)%5)/1;

    
cout<<"Your total was:\n";
cout<<"Dollars:"<<dollar<<endl;;
cout<<"Quarter:"<<quarter<<endl;;
cout<<"Dime:"<<dime<<endl;;

cout<<"Nickel:"<<nickel<<endl;;
cout<<"Penny:"<<penny <<endl;;
    return 0;
}