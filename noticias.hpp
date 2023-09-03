#include <iostream>
#include <string>

using namespace std;

   //esto es basado de la donde se saca las noticias que tenian estos campos y todos eran strings 

class nodo { // Constructores
   public:
   	
   	
nodo(int v)
    {
       valor = v;
       siguiente = NULL;
       anterior = NULL;
    }

nodo(int v, nodo  *signodo, nodo *antnodo)
    {
       valor = v;
       siguiente = signodo;
       anterior = antnodo;
    }


   private:
    int valor=0;
    nodo *siguiente;
    nodo *anterior;
    
    /*string id;
    string nombre;
    string autor;
    string titulo;
    string url;
    string imagenurl;
    string fecha;
    string contenido;
   */
        
   friend class lista;
};

typedef nodo *pnodo;


void EliminarTotal(string nombre){
/*
Buscar(string nombre)
Se pregunta una confirmacion
Eliminar(string nombre)
*/
}



void Top5(){
/*
Mostrar()
pero con un for desde fuera para que solo imprima las 5 primeras
*/

}

void Mostrar(){
    /*se usaria el metod que esta en el metodos.hpp*/
}


void CambiarRelevancia(string nombre,int cambio){
/*
Buscar(nombre)
Eliminar(nombre)
IngresarEspecifico(string nombre,int cambio) aqui se usaria el mismo nombre y para el int seria agarrar el que tenia al principio
y luego haberle sumado o restado el que el usuario ingreso
*/

}





