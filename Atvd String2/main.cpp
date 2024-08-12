#include <iostream>
#include <string>

using namespace std;

int main() {
    string str1, str2;

    cout << "Digite a primeira string: ";
    getline(cin, str1);
    cout << "Digite a segunda string: ";
    getline(cin, str2);

    cout << "Primeira string: " << str1 << endl;
    cout << "Segunda string: " << str2 << endl;

    if (str1.length() >= 2) {
        cout << "Segunda letra da primeira string: " << str1[1] << endl;
    } else {
        cout << "A primeira string nao possui segunda letra." << endl;
    }

    if (str2.length() >= 2) {
        cout << "Penultima letra da segunda string: " << str2[str2.length() - 2] << endl;
    } else {
        cout << "A segunda string nao possui penultima letra." << endl;
    }

    return 0;
}
