#include <iostream>

using namespace std;

int main()
{

    int num{};
    cout << "Enter a number between 1 an 50" << endl;
    cin >> num;
    if (num > 10 && num <= 50)
    {
        cout << num << " is greater than 10 and less than/equal to 50";
    }
    else
    {
        cout << "Fuck off";
    }

    return EXIT_SUCCESS;
}