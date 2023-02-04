#include<iostream>
#include<vector>
using namespace std;

int main(){


vector <int> vector1;

vector <int> vector2;

vector1.push_back(10);
vector1.push_back(20);

vector2.push_back(100);
vector2.push_back(200);

cout<<"Vector 1 attributes:\n";
cout<<vector1.at(0)<<endl;
cout<<vector1.at(1)<<endl;
cout<<vector1.size()<<endl;

cout<<"Vector 2 Attributes:\n";
cout<<vector2.at(0)<<endl;
cout<<vector2.at(1)<<endl;
cout<<vector2.size()<<endl;


vector <vector<int>> vector_2d;

vector_2d.push_back(vector1);
vector_2d.push_back(vector2);

cout<<"The 2,2 element of vector 2d is: "<<vector_2d.at(1).at(1);












    return 0;
}