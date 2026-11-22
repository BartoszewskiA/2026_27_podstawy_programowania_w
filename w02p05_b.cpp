#include <iostream>

using namespace std;
// przykład błęddu
int main()
{

    int x = 0, suma = 0, licznik = 0;
    // do
    // {
    //     cout << "x=";
    //     cin >> x;
    //     if (x == 0) break;
    //     licznik++;
    //     suma += x;
    // } while (true);
    while (1)
    {
        cout << "x=";
        cin >> x;
        if (x == 0)
            break;
        licznik++;
        suma += x;
    }

    cout << "Suma = " << suma << endl
         << "Srednia = " << (double)suma / licznik;
    return 0;
}