#include <iostream>

using namespace std;

int licznik = 0;  //zmienna globalna

void funkcja()
{
    licznik++;
    cout<<"funkcję uruchomiana: " << licznik <<" razy\n";
}

int main()
{
    funkcja();
    funkcja();
    funkcja();
    funkcja();
    return 0;
}