#include <iostream>

using namespace std;

void wyswietlPowitanie(string imie);
double obliczSrednia(double a, double b);
int funkcja_ktora_dopiero_napisze();

    int main()
{
    // wyswietlPowitanie("Artur");
    // double wynik = obliczSrednia(3, 7);
    // cout << wynik;
    int x =3, y=7;
    cout<< obliczSrednia(x,y);
    //funkcja_ktora_dopiero_napisze();
    return 0;
}

void wyswietlPowitanie(string imie) // procedura –nic nie zwraca
{
    cout << "Witaj, " << imie << "!" << endl;
    return;
}

double obliczSrednia(double a, double b) // funkcja –zwraca wartość
{
    double x = (a + b) / 2.0;
    return x;
}