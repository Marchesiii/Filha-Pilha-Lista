#ifndef LISTABASE
#define LISTABASE
#include <ioStream>
using namespace std;
class Elemento
{
private:
    int valor;
    Elemento *proximo;

public:
    void operator+(Elemento *outro)
    {
        setProximo(outro);
    }

    Elemento(int valorEx)
    {
        valor = valorEx;
        proximo = nullptr;
    }

    Elemento(int valorEx, Elemento *proximoEx)
    {
        valor = valorEx;
        proximo = proximoEx;
    }

    int getValor()
    {
        return valor;
    }

    Elemento *getProximo()
    {
        return proximo;
    }

    void setProximo(Elemento *proximoEx)
    {
        proximo = proximoEx;
;    }

    void imprime()
    {
        cout << "Valor: " + to_string(getValor()) << endl;
        if (proximo)
        {
            cout << "Proximo: " + to_string(proximo->getValor()) << endl;
        }
    }
};

class ListaBase
{
private:
    Elemento* inicio;

    Elemento* getLast(){
        Elemento* proximo = inicio;
        while(proximo->getProximo() != nullptr){
            proximo = proximo->getProximo();
        }
        return proximo;
    }
public:
    ListaBase(){
        inicio = nullptr;
    }

    void setInicio(Elemento* elementoEx){
        inicio = elementoEx;
    }

    Elemento* getInicio(){
        return inicio;
    }

    int add(int valor)
    {
        Elemento *elemento = new Elemento(valor);

        if (inicio == nullptr)
        {
            inicio = elemento;
        }
        else
        {
            Elemento *proximo = getLast();
            proximo->setProximo(elemento);
        }

        return 1;
    }

    Elemento *peek(int valor)
    {
        Elemento *elemento = inicio;
        bool achou = false;
        while (!achou && elemento != nullptr)
        {
            achou = elemento->getValor() == valor;
            if (!achou)
            {
                elemento = elemento->getProximo();
            }
        }
        if (achou)
        {
            return elemento;
        }
        return nullptr;
    }
    
    void imprime()
    {
        Elemento *elemento = inicio;
        while (elemento != nullptr)
        {
            cout << elemento->getValor() << " ";
            elemento = elemento->getProximo();
        }
        std::cout << std::endl;
    }
};
#endif