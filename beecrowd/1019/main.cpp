#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int totalDias;

    cin >> totalDias;

    int anos = totalDias / 365;
    int resto = totalDias % 365;

    int meses = resto / 30;
    int dias = resto % 30;

    cout << anos << " ano(s)" << endl;
    cout << meses << " mes(es)" << endl;
    cout << dias << " dia(s)" << endl;

    return 0;
}
