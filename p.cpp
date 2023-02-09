#include<iostream>
#include<vector>
using namespace std;

int main(){

vector <int> vec {12,23,43,45,56,67,78,89,90};

int i {},count {};
while(vec[i]!=98){
    i++;
    count++;

}
cout<<count;


    return 0;
}