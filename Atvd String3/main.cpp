#include <iostream>
#include <string>

using namespace std;

int main() {
    string str;
    int count = 0;

    cout << "Digite uma string: ";
    getline(cin, str);

    for (char &c : str) {
        if (c == 'a') {
            c = 'b';
            count++;
        }
    }

    cout << "Numero de caracteres modificados: " << count << endl;
    cout << "String modificada: " << str << endl;

    return 0;
}
