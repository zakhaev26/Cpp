#include<iostream>

using namespace std;

int main(){
 char selection;
    do{
       
        cin>>selection;
        if(selection=='1'){
            cout<<"You choosed 1.";
        }
        else if(selection=='2'){
            cout<<"You choosed 2.";
        }
        else if(selection=='3'){
            cout<<"You choosed 3.";
        }
        else if(selection=='4'){
            cout<<"You choosed 4.";
        }
        else if(selection=='q'||selection=='Q'){
            cout<<"quit";
        }

    }while(selection!='q'||selection!='Q');

    return 0;
}