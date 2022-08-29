#include<iostream>
#include "pilhaencadeada.h"

int main(){
    pilha pilha1;
    Tipo elemento;
    int opc;
    bool verifica;

    do{
        std::cout << "Digite 1 para inserir um elemento\n";
    
        std::cout << "Digite 2 para remover um elemento\n";
      
        std::cout << "Digite 3 para imprimir a pilha\n";
     
        std::cout << "Digite 4 para verificar se a pilha esta vazia\n";
        
       // std::cout << "Digite 5 para verificar se a pilha esta cheia\n";
     
        std::cout << "Digite 0 para encerrar o programa\n";
        
        std::cin >> opc;

    /*
    if(opc == 5) {
            verifica = pilha1.cheia();
            std::cout<< verifica << '\n';
        }
*/
    if(opc == 4) {
            verifica = pilha1.vazia();
            std:: cout << verifica << '\n';
        }
  
    if(opc == 3) {
            pilha1.print();
        }

    if(opc == 2){
            elemento = pilha1.pop();
            std::cout << "Elemento removido: " << elemento << '\n';
            
        }


    if(opc == 1) {
            std::cout << "digite o elemento a ser inserido\n";
            std::cin >> elemento; 
            pilha1.push(elemento);
        }

    } while(opc != 0);
    


}