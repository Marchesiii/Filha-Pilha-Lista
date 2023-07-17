#ifndef LISTA
#define LISTA
#include <iostream>
#include "ListaBase.h"
using namespace std;
class Lista {
    private:
        ListaBase lista;
    public:

    Lista(){
        lista = ListaBase();
    }

    int add(int valor){
        return lista.add(valor);
    }

    Elemento* peek(int valor){
        return lista.peek(valor);
    }

    void imprime(){
        lista.imprime();
    }

    int remove(int valor)
    {
            Elemento* inicio = lista.getInicio();
            if (inicio)
            {
                bool achou = false;
                if ((valor == (inicio->getValor())))
                {
                    if (inicio->getProximo())
                    {
                        achou = true;
                        Elemento *elemento = inicio;
                        lista.setInicio(inicio->getProximo());
                        delete elemento;
                    }
                    else
                    {
                        achou = true;
                        delete inicio;
                        lista.setInicio(nullptr);
                    }
                }
                else
                {
                    Elemento *elemento = inicio;
                    while (!achou && elemento->getProximo() != nullptr)
                    {
                        if (elemento->getProximo()->getValor() == valor)
                        {
                            achou = true;
                            Elemento *temp = elemento->getProximo();
                            elemento->setProximo(elemento->getProximo()->getProximo());
                            delete temp;
                        }
                    }
                }
            if (achou)
            {
                return 1;
            }
            }
        

        return 0;
    }
};
#endif