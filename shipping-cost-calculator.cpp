#include<iostream>

using namespace std;

int main(){
    int l,b,h;
    const double charge {2.5};
    double total_cost =0;
    cout<<"Enter Length:";;
    cin>>l;
    cout<<"Enter Breadth:";
    cin>>b;
    cout<<"Enter Height:";
    cin>>h;

    if(l<=10&&b<=10&&h<=10){
        if(l*b*h<=100){
           total_cost=charge;
        }
        else if(l*b*h>100){
            total_cost=charge+charge*0.1;
        }
        else{
            total_cost=charge+charge*0.25;
        }

        cout<<"Total Cost:"<<total_cost;
    }
    else{
        cout<<"We can't ship it!";
    }



    return 0;
}