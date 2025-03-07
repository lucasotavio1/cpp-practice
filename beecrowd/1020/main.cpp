#include <iostream>

using namespace std;

int main() {
    int n;

    cin >> n;

    int anos = n / 365;
    int resto = n % 365;
    int meses = resto / 30;
    int diasRestantes = resto % 30;

    cout << anos << " ano(s)\n" << meses << " mes(es)\n" << diasRestantes << " dia(s)" << endl;

    return 0;
}
