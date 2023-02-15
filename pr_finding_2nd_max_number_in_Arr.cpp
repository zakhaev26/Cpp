#include <iostream>
#include <vector>

using namespace std;

int main()
{

    vector<int> vec{12, 23, 34, 45, 56, 67, 78};
    int max = vec.at(0);

    for (int i = 0; i <= 6; i++)
    {
        if (vec.at(i) >= max)
        {
            max = vec.at(i);
        }
    }
    int max_2 = vec.at(0);
    int a = 0;
    // for (int i = 0; i <= 6; i++)
    // {
    //     for (int j = 1; j <= 1000; j++)
    //     {
    //         if (max - j == vec.at(i))
    //         {
    //             max_2 = vec.at(i);
    //             a++;
    //             break;
    //         }
    //     }
    //     if (a == 1)
    //     {
    //         break;
    //     }
    // }

    for (int j = 1; j <= 1000; j++)
    {
        for (int i = 0; i <= 6; i++)
        {
            if (max - j == vec.at(i))
            {
                max_2 = vec.at(i);
                a++;
                break;
            }
        }
        if (a == 1)
        {
            break;
        }
    }

    cout << max << endl;
    cout << max_2;

    return 0;
}
