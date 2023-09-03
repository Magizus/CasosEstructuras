#include <iostream>
#include <string>
#include "noticias.hpp"
using namespace std;

//Lista doble enlazada

class lista {
   public:
    lista() { primero =  NULL; }
    
    void ANI(int v);//ANI = Agregar Noticia Inicio
    void InsertarPos (int v, int pos);
    void EliminarPos(int pos);
    void Imprimir();
    void Borrar(int v);
    void Mostrar();
    void borrarPosicion(int pos);
    bool ListaVacia() { return primero == NULL; }
    int Largo();

    private:
    pnodo primero;
    pnodo actual;
    pnodo anterior;
};

void Buscar(string nombre){
/*Entra el nombre y seria pasar por la lista y sacar/imprimir los que tengan lo que ingreso el usuario en el titulo y se le
muestra las que coinciden 
*/

}

void lista::ANI(int valor){//Agregar Noticia Inicio
    if (ListaVacia())
    {
    primero = new nodo(valor);
    }else{
        nodo* nuevo = new nodo(valor,primero,nullptr);
        primero -> anterior = nuevo;
        primero = nuevo;
    }
}



void IngresarEspecifico(string nombre, int posi){
/*Este es para cuando uno quiere cambiar la relevancia. Para que se ingrese en una posicion que desea el usuario
*/
}

void Eliminar(string nombre){
/*Se ingresa el nombre de la noticia y la elimina
*/

}


int lista::Largo()
{
    int conta = 0;
    pnodo aux = primero;
        while (aux!= nullptr){
            aux = aux->siguiente;
            conta++;
        }

    return conta;
}

void lista::Mostrar()
{
nodo *aux;
if(primero==NULL)
    cout << "La lista esta vacia";
else
{
    aux=primero;
    while(aux)
    {
        cout << aux->valor<< "elemento";
        aux = aux->siguiente;
    }
}


}






