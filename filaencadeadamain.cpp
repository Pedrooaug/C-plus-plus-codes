#include <iostream>
#include "filaencadeada.h"

using namespace std;

int main(){
    filaencadeada fila1;
    int opcao;
    Tipo item;
    cout << "Programa gerador de filas:\n";

    do{
        cout << "Digite 0 para parar o programa!\n";
        cout << "Digite 1 para inserir um elemento!\n";
        cout << "Digite 2 para remover um elemento!\n";
        cout << "Digite 3 para imprimir a fila!\n";
        cin >> opcao;
        if (opcao == 1){
            cout << "Digite o elemento a ser inserido na fila!\n";
            cin >> item;
            fila1.push(item);
        } else if (opcao == 2){
            item = fila1.pop();
            cout << "O elemento removido e: " << item << endl;
        } else if (opcao == 3){
            fila1.print();
        }
    } while (opcao != 0);

    return 0;
}