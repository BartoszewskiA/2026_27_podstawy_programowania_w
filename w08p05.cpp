#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main()
{
    const int MAX_L = 100;
    fstream plik;
    string tab[MAX_L];
    plik.open("plik.txt", ios::in);
    if (!plik.is_open())
    {
        cout << "Blad pliku";
        return 0;
    }
    cout << "Plik otwarty prawidlowo" << endl;
    string s;
    int ile =0;
    while (getline(plik, tab[ile]) && ile < MAX_L)
    {
        ile++;
    }
    plik.close();
    //wypisanie wyniku

    for(int i=0; i< ile; i++)
    cout<<i<<": "<<tab[i]<<endl;
    return 0;
}