#include<iostream>
#include<vector>
#include<cctype>

using namespace std;

int main(){

 /*#1*/   char array [10] {'g','o','n','\0'};
    cout<<array;

 /*#2*/  char array2 [10] {};
    cin>>array2;
    cout<<array2;

/*#3*/ cin>>array2;
cout<<array2;

// getline(cin,array2,20);
/*but*/

// char array_3 [20] {};
// array_3="soubhik" error
// for this,use strcpy fxn.




    return 0;
}