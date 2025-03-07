#include <iostream>
#include <string>

using namespace std;

class Carro {
private:
    string marca;
    string modelo;
    int ano;

public:
    Carro(string marca, string modelo, int ano) {
        this->marca = marca;
        this->modelo = modelo;
        this->ano = ano;

    }

    void exibirInfo() {
        cout << "Marca: " << marca << endl;
        cout << "Modelo: " << modelo << endl;
        cout << "Ano: " << ano << endl;
    }

    void acelerar(int velocidade) {
        cout << "O carro " << modelo << " acelerou para " << velocidade << " km/h." << endl;
    }
};

int main() {
    Carro meuCarro("Honda", "Civic", 2022);
    meuCarro.exibirInfo();
    meuCarro.acelerar(200);

    return 0;
}
