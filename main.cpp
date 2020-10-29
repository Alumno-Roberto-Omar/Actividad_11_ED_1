#include "ArregloDinamico.h"
#include<iostream>

using namespace std;

int main()
{ 
    ArregloDinamico arreglo;
    arreglo.insertar_final("te");
    arreglo.insertar_final("llamas?,");
    arreglo.insertar_final("yo");
    arreglo.insertar_final("respondo");
    arreglo.insertar_final("al");
    arreglo.insertar_final("nombre");
    arreglo.insertar_final("de");
    arreglo.insertar_final("Omar");
    arreglo.insertar_inicio("como");
    arreglo.insertar_inicio("Hola,");

    for (size_t i = 0; i < arreglo.size(); i++)
    {
        cout<<arreglo[i]<<" ";
    }
    return 0;
}