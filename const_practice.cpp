#include<iostream>
using namespace std;

int main(void){

    const int charge =30;
    const int stax =0.06;
    const int est =30;

    int rooms;
    cout<<"Enter the number of rooms you want to book:"<<endl;
    cin>>rooms;
    cout<<"Your total would be :"<<(rooms*charge)+stax*(rooms*charge)<<"\nEstimates are valid upto "<<est<<"days.";

return 2000000;

}