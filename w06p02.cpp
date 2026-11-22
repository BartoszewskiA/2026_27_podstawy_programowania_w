#include <iostream>
#include <string>

using namespace std;

int main()
{
    string imie_nazwisko;
    cout << "Podaj imie i nazwisko: ";
    getline(cin,imie_nazwisko);
    cout << "Witaj " << imie_nazwisko << "!";
    return 0;
}