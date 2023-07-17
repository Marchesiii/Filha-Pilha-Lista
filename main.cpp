#include <iostream>
#include "Fila.h"
#include "Pilha.h"
#include "Lista.h"

int main(){

    Elemento elemento(10);
    elemento.imprime();

    Lista lista;
    lista.add(20);
    lista.add(21);
    lista.add(25);
    lista.add(27);
    lista.peek(20)->imprime();
    lista.imprime();
    lista.remove(20); // Inicio
    lista.imprime();
    lista.remove(25); // Meio
    lista.imprime();
    lista.remove(27); // Fim
    lista.imprime();
    lista.remove(21); //Zerando
    lista.imprime();

    Fila fila;
    fila.add(10);
    fila.add(16);
    fila.peek(2);
    fila.imprime();
    fila.remove();
    fila.imprime();
    fila.remove();
    fila.imprime();
    fila.remove();
    fila.imprime();

    Pilha pilha;
    pilha.add(10);
    pilha.add(16);
    pilha.peek(2);
    pilha.imprime();
    pilha.remove();
    pilha.imprime();
    pilha.remove();
    pilha.imprime();

    return 1;
}

// Lista -> Array[] Elementos, Tamanho
// Elemento -> Valor->proximo
// criaLista() -> Construtor da Lista
// criaElemento() -> COnstrutor do elemento.
// add(valor) -> Retorna 1 ou 0
// remove(valor) -> Remove determinado elemento
// peek(valor) -> Retorna informações sobre o elemento (posição, memória, proximo);
// imprime() -> Retorna lista da forma como está armazenada
;