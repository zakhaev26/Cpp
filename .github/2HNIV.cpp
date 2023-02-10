#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int a{};
    vector<int> vec{};
    int count{};
    cout << "How many number you want to add in vector?\n"
         << endl;
    int n;
    cin >> n;
    for (int i = 0; i <= n - 1; i++)
    {
        cin >> a;
        vec.push_back(a);
    }
    int max = vec.at(0);
    for (int i = 0; i <= n - 1; i++)
    {
        if (vec.at(i) >= max)
        {
            max = vec.at(i);
        }
    }
    // cout<<max;

    int max_2 {};

    // for (int i = 0; i <= n - 1; i++)
    // {

    //     for (int k = 1; k <= max + 1; k++)
    //     {
    //         if (max - k == vec.at(i))
    //         {
    //             max_2 = vec.at(i);
    //             count++;
    //             break;
    //         }
    //     }
    //     if (count == 1)
    //     {
    //         break;
    //     }
    // }
    
    // cout<<max_2;

    for (int j = 1; j <= max + 2; j++)
    {
        for (int k = 0; k <= count; k++)
        {
            if (max - j == vec[k])
            {
                max_2 = vec[k];
                printf("%d\t", max_2);
                count+= 1;
            }
        }
        if (count == 1)
        {
            break;
        }
    }
    return 0;
}