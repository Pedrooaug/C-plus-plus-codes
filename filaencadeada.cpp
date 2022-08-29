#include <iostream>
#include "filaencadeada.h"
#include <cstddef>
#include <new>
    
    filaencadeada::filaencadeada(){
        primeiro = NULL;
        ultimo = NULL;
    }

    filaencadeada::~filaencadeada(){
        No* temp;
        while (primeiro != NULL){
            temp = primeiro;
            primeiro = primeiro->proximo;
            delete temp;
        }
        ultimo = NULL;
    }

    bool filaencadeada::estavazio(){
        return (primeiro == NULL);
    }


    void filaencadeada::push(Tipo elemento ){
            No* novo = new No;
            novo->valor = elemento;
            novo->proximo = NULL;
            if (primeiro == NULL){
                primeiro = novo;
            } else {
                ultimo->proximo = novo;
            }
            ultimo = novo;
        }

    Tipo filaencadeada::pop(){
        if (estavazio()){
            std::cout << "A fila esta vazia!\n";
            std::cout << "Nao tem elemento a ser removido!\n";
            return 0;
        } else{
            Tipo elemento = primeiro->valor;
            primeiro = primeiro->proximo;
            if (primeiro == NULL){
                ultimo = NULL;
            }
            return elemento;
        }
    }

    void filaencadeada::print(){
        No* temp = primeiro;
        std::cout << "Fila= [ ";
        while (temp != NULL){
            std::cout << temp->valor << " ";
            temp = temp->proximo;
        }
        std::cout << "]\n";
    }