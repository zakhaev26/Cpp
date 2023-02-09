#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> vec{};
    while (1 > 0)
    {
        char userchoice;
        cout << "Welcome!\nEnter a choice:\nP=Print numbers\nA =Add numbers\nM =find mean\nS =Smallest no.\nL=Largest no.\nPress Q to quit.\n"
             << endl;
        cin >> userchoice;

        if (userchoice == 'P' || userchoice == 'p')
        {
            for (auto marks : vec)
            {
                cout << marks << endl;
            }
        }
        else if (userchoice == 'A' || userchoice == 'a')
        {
            int a;
            cout << "Enter the number:\n";
            cin >> a;
            vec.push_back(a);
        }
        else if (userchoice == 'M' || userchoice == 'm')
        {
            double sum = 0;
            for (auto summer : vec)
            {
                sum += summer;
            }
            cout << sum / 2;
        }
        else if (userchoice == 'S' || userchoice == 's')
        {
            int min = vec[0];
            for (int i = 0; i < vec.size(); i++)
            {
                if (min >= vec[i])
                {
                    min = vec[i];
                }
            }
            cout << min;
        }
        else if (userchoice == 'L' || userchoice == 'l')
        {
            int max = vec[0];
            for (int i = 0; i < vec.size(); i++)
            {
                if (max <= vec[i])
                {
                    max = vec[i];
                }
            }
            cout << max;
        }
        if (userchoice == 'Q' || userchoice == 'q')
        {
            
            break;
        }
    }
cout << "Thank you!" << endl;
    return 0;
}