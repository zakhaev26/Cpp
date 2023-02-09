#include <iostream>

using namespace std;

int main()
{

    int table_prefix[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    for (int i = 0; i <= 9; i++)
    {
        for (int j = 0; j <= 9; j++)
        {
            cout << table_prefix[i] << " X " << table_prefix[j] << " = " << table_prefix[i] * table_prefix[j];
            cout << "\n";
        }
        cout << "\n";
        cout << "Multiplication table of " << table_prefix[i] << " is :" << endl;
    }

    return 0;
}