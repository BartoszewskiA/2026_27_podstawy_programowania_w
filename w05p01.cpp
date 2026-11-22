#include <iostream>
#include <cmath>

using namespace std;

void zaokraglij(double x, int ile_miejsc);

int main()
{
    double pi = 3.14157;
    zaokraglij(pi, 2);
    cout << "wynik=" << pi;
    return 0;
}

void zaokraglij(double x, int ile_miejsc)
{
    long mnoznik = 1;
    for (int i = 0; i < ile_miejsc; i++)
        mnoznik *= 10;
    double wynik = round(x * mnoznik) / (double)mnoznik;
    x = wynik;
}