#include <iostream>
#include <map>
#include <string>

using namespace std;

class GerenciadorSenhas {
private:
    map<string, string> senhas;

    string mascararSenha(const string& senha) {
        return string(senha.length(), '*');
    }

public:
    void adicionarSenha(const string& servico, const string& senha) {
        senhas[servico] = senha;
        cout << "Senha para o serviço '" << servico << "' adicionada com sucesso!" << endl;
    }

    void recuperarSenha(const string& servico) {
        if (senhas.find(servico) != senhas.end()) {
            cout << "Senha para serviço '" << servico << "': " << mascararSenha(senhas[servico]) << endl;
        } else {
            cout << "Serviço '" << servico << "' não encontrado." << endl;
        }
    }

    void listarServicos() {
        cout << "Serviços armazenados:" << endl;
        for (const auto& par : senhas) {
            cout << "- " << par.first << ": " << mascararSenha(par.second) << endl;
        }
    }
};

int main(){
    GerenciadorSenhas gerenciador;
    gerenciador.adicionarSenha("teste@teste.com", "senha1234");
    gerenciador.adicionarSenha("banco", "banco29");
    gerenciador.adicionarSenha("lucas", "luana");

    gerenciador.listarServicos();

    gerenciador.recuperarSenha("teste@teste.com");
    gerenciador.recuperarSenha("banco");
    gerenciador.recuperarSenha("servico_inexistente");

    return 0;
}
