#include <iostream>

using namespace std;

int main()
{
    const int ROZMIAR = 10;
    int tab[ROZMIAR];

    for (int i = 0; i < ROZMIAR; i++)
    {
        cout << "x" << i + 1 << "=";
        cin >> tab[i];
    }

    // for (int i = 0; i < ROZMIAR; i++)
    // {
    //     cout << tab[i] << "  ";
    // }

    for (int i = ROZMIAR - 1; i >= 0; i--)
    {
        cout << tab[i] << "  ";
    }

    return 0;
}