#include <iostream>
#include <vector>

using namespace std;

class PesquisaBinaria {
public:
    int pesquisa(const std::vector<int>& lista, int item) {
        int baixo = 0;
        int alto = lista.size() - 1;

        while (baixo <= alto) {
            int meio = (baixo + alto) / 2;
            int chute = lista[meio];

            if (chute == item) {
                return meio;
            } else if (chute > item) {
                alto = meio - 1;
            } else {
                baixo = meio + 1;
            }
        }
        return - 1;
    }
};

int main() {
    PesquisaBinaria pb;
    std::vector<int> lista = {1,2,3,4,5,6,7,8,9,10};

    std::cout << pb.pesquisa(lista, 3) << std::endl;
    std::cout << pb.pesquisa(lista, -1) << std::endl;

    return 0;
}