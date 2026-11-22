#include <iostream>
#include <string>
#include <ctime>

using namespace std;

int main()
{
    srand(time(NULL));
    const int DLUGOSC = 5;
    string tab[DLUGOSC];
    // string s;
    for (int i = 0; i < DLUGOSC; i++)
    {
        cout << i + 1 << ": ";
        // getline(cin, s);
        // tab[i] = s;
        getline(cin, tab[i]);
    }

    // for (int i = 0; i < DLUGOSC; i++)
    //     cout << tab[i] << " - ";
    string wynik = "";
    for (int i = 0; i < 3; i++)
    {
        wynik += tab[rand() % DLUGOSC];
        wynik += " ";
    }
    cout << wynik;
    return 0;
}