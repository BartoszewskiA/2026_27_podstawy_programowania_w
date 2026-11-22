#include <iostream>
#include <string>
using namespace std;

int main()
{
    string tekst;
    cout << "Podaj tekst: ";
    getline(cin, tekst);
    // for (int i = 0; i < tekst.length(); i++)
    //     cout << "[" << tekst[i] << "] ";

    for (int i = tekst.length() - 1; i >= 0; i--)
        cout << "[" << tekst[i] << "] ";
    return 0;
}