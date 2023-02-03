#include<iostream>
#include<vector>
using namespace std;

int main(){
//declaring
vector <int> number {23,34,45,65,67,78,90};




//pushback
cout<<number.at(2)<<endl;
number.push_back(777);
cout<<number[7];



    return 0;
}