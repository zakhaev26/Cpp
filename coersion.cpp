#include<iostream>


using namespace std;

int main(){

int total_amount {100};
int total_number {8};
double average {0.0};

// average =total_amount/total_number;//returns 12 and NOT 12.5.
// cout<<average<<endl;

//Reason:the total_number and total_amount ,both are of integer type,so the compiler will perform integer division and store the value of 12 in average.the 0.5 is hence TRUNCATED...

//PERFORMING COERSION:

average =static_cast<double>(total_amount)/static_cast<double>(total_number);//displays 12.5 now....
cout<<average<<endl;


    return 0;

}