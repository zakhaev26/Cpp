#include<iostream>
#include<string>

using namespace std;


int main(){

string s1 = {"I"};
string s2 = {"Am"};
string s3 = {"Soubhik"};

cout<<s1 +" "+ s2+ " "+ s3 <<endl;

// bool a =s1>s2;
// cout<<boolalpha;
// cout<<a;

// cout<<s3.erase(3)<<endl;
cout<<s3.find('u')+1<<endl;
cout<<s3.length();


string s4 {};
getline(cin,s4);
cout<<s4;

    return 0;
}