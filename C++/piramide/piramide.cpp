#include <stdlib.h>

#include <iostream>

using namespace std;

void printPiramideHor(int altura) {
    const int alt = altura + 1;
	const int cols = altura * 2; 
    char piramide[alt][cols];


    for (int i = 0; i <= alt; i++) {
        for (int j = 0; j <= cols; j++) {
            piramide[i][j] = ' ';
        }
    }

    for (int i = 0; i < alt; i++) {
        for (int j = alt - i; j < cols; j++) {
            piramide[i][j] = '*';
        }
    }

	for (int i = 0; i < alt; i++) {
        for (int j = alt + i -1; j <= cols; j++) {
            piramide[i][j] = ' ';
        }
    }

    for (int i = 0; i < alt; i++) {
        for (int j = 0; j <= cols; j++) {
            cout << piramide[i][j] << ' ';
        }
        cout << endl;
    }
}

void printPiramideVer(int altura) {
    cout << "Piramide vertical" << endl;
    for (int i = 0; i <= altura; i++) {
        for (int j = 0; j < i; j++) {
            cout << "*";
        }
        cout << endl;
    }
    for (int i = altura - 1; i >= 0; i--) {
        for (int j = 0; j < i; j++) {
            cout << "*";
        }
        cout << endl;
    }
}

int main() {
    bool orientacao = false;
    int altura = 0;
    cout << "selecione a orientação 0 para vertical, 1 para horizontal" << endl;
    cin >> orientacao;
    cout << "Digite a altura da pirâmide" << endl;
    cin >> altura;
    orientacao ? printPiramideHor(altura) : printPiramideVer(altura);
}
