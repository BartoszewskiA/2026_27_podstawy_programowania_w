#include <iostream>
#include <ctime>
#include <sstream>

using namespace std;

string miesiace[] =
    {
        "Styczen",
        "Luty",
        "Marzec",
        "Kwiecien",
        "Maj",
        "Czerwiec",
        "Lipiec",
        "Sierpien",
        "Wrzesien",
        "Pazdziernik",
        "Listopad",
        "Grudzien"};

string dni_tygodnia[] = {
    "Niedziela",
    "Poniedzialek",
    "Wtorek",
    "Sroda",
    "Czwartek",
    "Piatek",
    "Sobota"};

int main()
{
    time_t czas_rzeczywisty = time(NULL);
    tm *data = localtime(&czas_rzeczywisty);
    // cout << data->tm_mday << "." << data->tm_mon << "." << data->tm_year << " - " << data->tm_wday << endl;

    stringstream strumien;
    strumien << data->tm_mday << " "
             << miesiace[data->tm_mon] << " "
             << 1900 + data->tm_year << " - "
             << dni_tygodnia[data->tm_wday] << endl;

    strumien << data->tm_hour << ":" << data->tm_min << ":" << data->tm_sec;

    string wynik = strumien.str();

    cout << wynik;

    return 0;
}