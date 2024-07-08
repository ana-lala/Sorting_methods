#include "Gestiones.hpp"
#include "Utileria.hpp"
#include "HerramientasGestion.hpp"
#include "HerramientasVectores.hpp"
#include "MetodosDeOrdenamiento.hpp"
#include "Menu.hpp"
#include <cstdlib>

using namespace std;

int main()
{
    int opcion;
    do{
        system("cls");
        cout << "Programa que ordena listas de datos..." << endl;
        cout << endl <<"Opciones: " << endl;
        opcion = Menu();

        switch(opcion){
        case 0:
            cout << "Gracias por utilizar este programa" << endl;
            break;
        case BURBUJA:
            system("cls");
            cout << "Burbuja..." << endl;
            //GestionOrdenamiento(Burbuja);
            GestionBurbuja();
            break;
        case SELECCION:
            system("cls");
            cout << "Selecci\242n..." << endl;
            //GestionOrdenamiento(Seleccion);
            GestionSeleccion();
            break;
        case INSERCION:
            system("cls");
            cout << "Inserci\242n..." << endl;
            //GestionOrdenamiento(Insercion);
            GestionInsercion();
            break;
        case SHELLSORT:
            system("cls");
            cout << "Inserci\242n con intervalos decrecientes (Shell Sort) ..." << endl;
            //GestionOrdenamiento(ShellSort);
            GestionShellSort();
            break;
        case QUICKSORT:
            system("cls");
            cout << "R\240pido (Quick Sort) ..." << endl;
            //GestionOrdenamiento(QuickSort);
            GestionQuickSort();
            break;
        case MERGESORT:
            system("cls");
            cout << "Mezcla (Merge Sort)  ..." << endl;
            //GestionOrdenamiento(MergeSort);
            GestionMergeSort();
             // Fin de switch
    }
    cout << "\n\n";
    system("pause");
    }while(opcion != SALIR);
    return 0;
}
