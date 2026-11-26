#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    fstream plik;
    plik.open("plik.txt", ios::in);
    if (!plik.is_open())
    {
        cout << "Blad pliku";
        return 0;
    }
    cout << "Plik otwarty prawidlowo" << endl;
    string s;
    while (plik >> s)
    {
        cout << ": " << s << endl;
    }
    plik.close();
    return 0;
}