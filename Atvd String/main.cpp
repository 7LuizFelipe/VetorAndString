#include <iostream>
#include <string>

using namespace std;

int main() {
    string nome;
    string menorNome;

    cout << "Digite os nomes (pressione Enter para encerrar):" << endl;

    while (true) {
        getline(cin, nome);
        if (nome.empty()) {
            break;
        }
        if (menorNome.empty() || nome < menorNome) {
            menorNome = nome;
        }
    }

    if (!menorNome.empty()) {
        cout << "O nome lexicograficamente menor e: " << menorNome << endl;
    } else {
        cout << "Nenhum nome foi digitado." << endl;
    }

    return 0;
}
