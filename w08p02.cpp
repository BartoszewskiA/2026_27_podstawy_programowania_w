#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    fstream plik;
    plik.open("dane.txt", ios::out);
    plik << "to jest tekst testowy" << endl;
    plik << 3.14;
    plik.close();
    return 0;
}