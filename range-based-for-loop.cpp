#include <iostream>
#include <vector>
using namespace std;

int main(void)
{

    int scores[]{12, 23, 34, 45, 89};
    // the "mark" variable sets itself onto the base address of the array and then it just goes on until the array exhausts.In this way the loop looks easy and less prone to error.
    for (int mark : scores)
    {
        cout << mark << endl;
    }

    cout << endl;
    // also works in vectors!
    vector<int> numbers{1, 23, 45, 6, 70};

    for (auto numero : numbers)
    {
        cout << numero << endl;
    }

    return 0;
}