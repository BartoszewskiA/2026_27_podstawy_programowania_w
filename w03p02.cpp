#include <iostream>

using namespace std;

int main()
{
    int suma = 0;
    int x = 0;
    int licznik = 0;
    while (licznik < 5)
    {
        cout << "x[" << licznik + 1 << "]=";
        cin >> x;
        if (x < 0)
            continue;
        suma += x;
        licznik++;
    }
    cout << "Suma=" << suma;
    return 0;
}