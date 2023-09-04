#include <iostream>
#include <string>


using namespace std;


using namespace std;
 
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
    nodo *ultimo;
    
    /*string id; string nombre; string autor; string titulo; string url; string imagenurl; string fecha; string contenido;
   */
        
   friend class lista;
};

typedef nodo *pnodo;


class lista {
   public:
    lista() { primero =  NULL; }
    
    void ANI(int valor);//ANI = Agregar Noticia Inicio
    void InsertarPos (int v, int posi);
    void Buscar(int valor);
    void Eliminar(int v);
    void Mostrar();
    void borrarPosicion(int posi);
    bool ListaVacia() { return primero == NULL; }
    void Largo();

    private:
    pnodo primero;
    pnodo anterior;
    pnodo ultimo;
};



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



void lista::InsertarPos(int valor,int posi)
{
   if (ListaVacia()){
     primero = new nodo(valor);
     ultimo = primero;
   }else{
        if(posi <= 1)
		{
          ANI(valor);//Insertar Inicio
        }else{
            nodo *aux = primero;
            int i = 2;
            while ((i != posi) && (aux->siguiente != NULL)){
                i++;
                aux = aux -> siguiente;
            }
            nodo* nuevo = new nodo(valor);
            nuevo -> siguiente = aux -> siguiente;
            nuevo -> anterior = aux;

            if (nuevo->siguiente != NULL){
                nuevo->anterior->anterior = nuevo;
            }else{
                ultimo = nuevo;
            }
            aux->siguiente = nuevo;
        }
    }
}
void lista::Eliminar(int valor) {
    nodo* aux = primero;

    while (aux != NULL) {
        if (aux->valor == valor) {
           cout << "Desea eliminar el valor " << aux->valor << "? Ingrese: Si ,para eliminar cualquier otra opcion no borrara el valor de la lista. ";
            string respuesta;
            cin >> respuesta;

            if (respuesta == "Si") {
                // Elimina el nodo actual
                if (aux->anterior != NULL) {
                    aux->anterior->siguiente = aux->siguiente;
                } else {
                    primero = aux->siguiente;
                }
                
                if (aux->siguiente != NULL) {
                    aux->siguiente->anterior = aux->anterior;
                } else {
                    ultimo = aux->anterior;
                }

                delete aux;
                cout << "Valor eliminado." << endl;
                return;
            }else{
                cout <<"Valor no eliminado." << endl;
                return;
            }
        }
        aux = aux->siguiente;
    }

    cout << "Valor no encontrado en la lista." << endl;
}

void lista::Buscar(int valor){
    nodo* aux = primero;
    while (aux != nullptr) {
        if (aux->valor == valor) {
            cout << "Valor encontrado: " << aux->valor << endl;
        }
        aux = aux->siguiente;
    }

}

void lista::Largo()
{
    int conta = 0;
    pnodo aux = primero;
        while (aux!= nullptr){
            aux = aux->siguiente;
            conta++;
        }
    cout<<"La cantidad de elementos que hay en la lista es de: " << conta << endl;
    return ;
}

void lista::Mostrar()
{
nodo *aux;
if(primero==NULL)
    cout << "La lista esta vacia"<<endl;
else
{
    aux=primero;
    while(aux)
    {
        cout << aux->valor<< " elemento" << endl;
        aux = aux->siguiente;
    }
}
cout<<"Se mostro toda la lista."<<endl;

}

