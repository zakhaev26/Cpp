#include<iostream>
#include<vector>
using namespace std;


int main(){
vector <int> vec;
    int num,loop_num;
    cout<<"Enter the number of data items you have:"<<endl;
    cin>>loop_num;

    for(int i=1;i<=loop_num;i++){
        cin>>num;
        vec.push_back(num);
    }
    //12,34,56,11,...
    for(int i=0;i<=loop_num-1;i++){
        
        for(int j=1;j<=vec.at(i);j++){
            cout<<"-";
        }
        cout<<"\n";
        
    }

    return 0;
}