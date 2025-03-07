#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    double n;

    cin >> n;

    int totalCentavos = static_cast<int>(round(n * 100));

    int notas[] = {10000, 5000, 2000, 1000, 500, 200};
    int moedas[] = {100, 50, 25, 10, 5, 1};

    cout << "NOTAS:" << endl;
    for (int nota : notas) {
        int quantidade = totalCentavos / nota;
        printf("%d nota(s) de R$ %.2f\n", quantidade, nota / 100.0);
        totalCentavos %= nota;
    }

    cout << "MOEDAS:" << endl;
    for (int moeda : moedas) {
        int quantidade = totalCentavos / moeda;
        printf("%d moeda(s) de R$ %.2f\n", quantidade, moeda / 100.0);
        totalCentavos %= moeda;
    }

    return 0;
}
