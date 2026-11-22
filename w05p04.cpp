#include <iostream>

using namespace std;


void funkcja()
{
    static int licznik = 0; // zmienna lokalna statyczna
    licznik++;
    cout << "funkcja uruchomiana: " << licznik << " razy\n";
}

int main()
{
    funkcja();
    funkcja();
    funkcja();
    funkcja();
    return 0;
}