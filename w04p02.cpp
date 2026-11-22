#include <iostream>
#include <ctime>

using namespace std;

int main()
{
    srand(time(NULL));
    int a, b;
    cout << "podaj zakres:" << endl;
    cout << "a=";
    cin >> a;
    cout << "b=";
    cin >> b;
    for (int i = 0; i < 100; i++)
    {
        cout << rand() % (b-a) + a << "\t";
    }

    return 0;
}