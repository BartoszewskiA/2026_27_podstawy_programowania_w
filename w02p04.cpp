#include <iostream>

using namespace std;
// przykład błęddu
int main()
{

    int x = 0, suma = 0, licznik = 0;
    do
    {
        cout << "x=";
        cin >> x;
        licznik++;
        // suma = suma+x;
        suma += x;
    } while (x != 0);
    cout << "Suma = " << suma << endl
         << "Srednia = " << (double)suma / licznik;
    return 0;
}