#include <iostream>

using namespace std;

int main() {
    int n;

    cin >> n;

    int horas = n / 3600;
    int resto = n % 3600;
    int minutos = resto / 60;
    int segundos = resto % 60;

    cout << horas << ":" << minutos << ":" << segundos << endl;

    return 0;
}
