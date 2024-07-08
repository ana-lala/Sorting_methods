#include "Utileria.hpp"
#include "Menu.hpp"

using std:: cout;
using std:: endl;

int Menu()
{
    int opcion;
    cout << SALIR << ") Salir del programa" << endl;
    cout << BURBUJA  << ") Ordenar por Burbuja" << endl;
    cout << SELECCION  << ") Ordenar por Selecci\242n" << endl;
    cout << INSERCION  << ") Ordenar por Inserci\242n" << endl;
    cout << SHELLSORT  << ") Ordenar Inserci\242n con intervalos decrecientes (Shell Sort) " << endl;
    cout << QUICKSORT  << ") R\240pido (Quick Sort) "<< endl;
    cout << MERGESORT  << ") Mezcla (Merge Sort) "<< endl;
    do{
        opcion = CapturarEntero("Elija una opci\242n: ");
        if(opcion < SALIR || opcion > MERGESORT)
            cout << "Error: no existe esa opci\242n" << endl;
    }while(opcion < SALIR || opcion > MERGESORT);
    return opcion;
}
//***************************************************************************
