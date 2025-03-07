#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;


int main() {
    srand(time(nullptr));
    int valor, sorteado = rand()%100, tentativas = 0;

    cout << " *** Tente descobrir o n�mero m�gico entre 0 e 99. ***\n\n";

    do {
        cout << "Informe um valor: ";
        cin >> valor;
        tentativas++;

        if (valor == sorteado) {
            cout << "^^ Voc� acertou com: " << tentativas << " tentativas.\n\n";
        } else if (valor < sorteado) {
            cout << "x_x Errou! Digite um n�mero maior.\n\n";
        } else if (valor > sorteado) {
            cout << "x_x Errou! Digite um n�mero menor.\n\n";
        }

    } while (valor != sorteado);

    return 0;
}
