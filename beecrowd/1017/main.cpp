#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int tempo, velocidade;

    cin >> tempo >> velocidade;

    double litros = (tempo * velocidade) / 12.0;

    cout << fixed << setprecision(3) << litros << endl;

    return 0;
}
