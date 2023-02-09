#include<iostream>

using namespace std;

int main(){

    //determine whether a integer is within bounds which is also input of user.
    cout<<boolalpha;

    int userint {};
    int bound_lower {10};
    int bound_upper {20};

    cout<<"Enter a number within "<<bound_lower<<" and "<<bound_upper<<endl;

    cin>>userint;

    bool result =(userint>=bound_lower)&&(userint<bound_upper);

    cout<<"Is "<<userint<<" within range = "<<result;

    return 0;

}