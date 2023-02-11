#include<iostream>
#include<string>
#include<cctype>

using namespace std;

int main(){

string usermsg{};
cout<<"Enter a message:\n";
getline(cin,usermsg);
for(int i=0;i<=usermsg.length()-1;i++){
    if(usermsg.at(i)=='a'){
        usermsg.at(i)='x';
    }
    if(isupper(usermsg.at(i))==static_cast<int>(usermsg.at(i))){
       static_cast<char>(islower(usermsg.at(i)));
    }
}
cout<<usermsg;

    return 0;
}