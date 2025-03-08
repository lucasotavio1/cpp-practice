#include <iostream>
#include <iomanip>
#include <cmath>
#include <map>

using namespace std;


int main() {
    int n, cidade = 0;

    while (cin >> n && n != 0) {
        cidade++;

        int totalPessoas = 0, totalConsumo = 0;

        map <int, int> consumoPorpessoa;

        for (int i = 0; i < n; i++) {
            int x, y;

            cin >> x >> y;

            totalPessoas += x;
            totalConsumo += y;

            consumoPorpessoa[y/x] += x;
        }
        if (cidade > 1) cout << "\n";
        cout << "Cidade# " << cidade << ":\n";

        bool primeiro = true;

        for(auto it : consumoPorpessoa) {
            if (!primeiro)
                cout << " ";
            cout << it.second << "-" << it.first;

            primeiro = false;
        }
        cout << "\n";

        double media = (double)totalConsumo/totalPessoas;
        double mediaTrunc = floor(media * 100)/100;

        cout << "Consumo medio: " << fixed << setprecision(2) << mediaTrunc << " m3.\n";

    }

    return 0;
}
