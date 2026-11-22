#include <iostream>

using namespace std;

int main()
{
    for (int j = 0; j < 10; j++)
    {
        for (int i = 0; i < 10; i++)
        {
            cout << (i + 1)*(j+1) << "\t";
        }
        cout << endl;
    }

    return 0;
}