#include <iostream>
#include <vector>

using namespace std;

int main()
{
/*
r =0;
r=


*/
    vector<int> vec{2,4,6,8};
    int result=1;
    for (int i = 0; i < vec.size()-1; i++)
    {
        for (int j = 1; j <= vec.size()-1; j++)
        {
            result = result + vec.at(i) * vec.at(j);
        }
    }
    cout<<result;
        return 0;
    

}