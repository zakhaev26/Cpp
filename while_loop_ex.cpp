// Given a vector of integers, determine how many integers are present before you see the value -99 . 
// Note, it's possible -99  is not in the vector!
//  If -99  is not in the vector then the result will be equal to the number of elements in the vector.
// The final result should be stored in an integer variable named count .

#include<iostream>
#include<vector>
using namespace std;

int main(){

    vector <int> vec{12,23,34,45,56,67,78,89};
int count{};
int i=0;
    while(vec.at(i)!=23&&i<=vec.size()-1){
        count++;
        i++;
    }
    cout<<count;
    return 0;

}