#include "HerramientasGestion.hpp"
#include"HerramientasVectores.hpp"
#include "Gestiones.hpp"
#include "MetodosDeOrdenamiento.hpp"
#include "Utileria.hpp"


using namespace std;
//*************************************************
void GestionBurbuja()
{
    int *v = NULL;
    int dim;

    dim = DimesionVector("Arreglo: ");


    try{
    v = Crear(dim);

    AzarOCapturar(v, dim);

    int velocidadanimacion = Velocidad();
    int mayor = MayorArreglo(v, dim);

    system("cls");
    cout << " >> ORDENAMIENTO BURBUJA";
    Imprimir(v,dim, 0, dim-1, mayor);
    cout << endl << endl;
    cout << "Proceso de ordenamiento en breve..." << endl;
    Burbuja(v, dim, velocidadanimacion, mayor);

    cout << endl << endl << "Fin del ordenamiento " << endl;
    Destruir(v);

    }catch(const bad_alloc &){
    cout << "Error en la asignaci\242n de memoria" <<endl;
} catch(...){
    cout << "Ocurrio\242 un error inesperado" << endl;
}
}
//*************************************************
void GestionSeleccion()
{
    int *v = NULL;
    int dim;

    dim = DimesionVector("Arreglo: ");

    try{
    v = Crear(dim);

    AzarOCapturar(v, dim);

    int velocidadanimacion = Velocidad();
    int mayor = MayorArreglo(v, dim);

    system("cls");
    cout << " >> ORDENAMIENTO SELECCION";
    Imprimir(v,dim, 0, dim-1, mayor);
    cout << endl << endl;
    cout << "Proceso de ordenamiento en breve..." << endl;

    Seleccion(v, dim, velocidadanimacion, mayor);

    cout << endl << endl << "Fin del ordenamiento " << endl;
    Destruir(v);

    }catch(const bad_alloc &){
    cout << "Error en la asignaci\242n de memoria" <<endl;
} catch(...){
    cout << "Ocurrio\242 un error inesperado" << endl;
}
}
//*************************************************
void GestionInsercion()
{
    int *v = NULL;
    int dim;

    dim = DimesionVector("Arreglo: ");

    try{
    v = Crear(dim);

    AzarOCapturar(v, dim);

    int velocidadanimacion = Velocidad();
    int mayor = MayorArreglo(v, dim);

    system("cls");
    cout << " >> ORDENAMIENTO INSERCION";
    Imprimir(v,dim, 0, dim-1, mayor);
    cout << endl << endl;
    cout << "Proceso de ordenamiento en breve..." << endl;


    Insercion(v, dim, velocidadanimacion, mayor);

    cout << endl << endl << "Fin del ordenamiento " << endl;
    Destruir(v);

    }catch(const bad_alloc &){
    cout << "Error en la asignaci\242n de memoria" <<endl;
} catch(...){
    cout << "Ocurrio\242 un error inesperado" << endl;
}
}
//*************************************************
void GestionShellSort()
{
    int *v = NULL;
    int dim;

    dim = DimesionVector("Arreglo: ");

    try{
    v = Crear(dim);

    AzarOCapturar(v, dim);

    int velocidadanimacion = Velocidad();
    int mayor = MayorArreglo(v, dim);

    system("cls");
    cout << " >> ORDENAMIENTO SHELL SORT";
    Imprimir(v,dim, 0, dim-1, mayor);
    cout << endl << endl;
    cout << "Proceso de ordenamiento en breve..." << endl;

    ShellSort(v, dim, velocidadanimacion, mayor);

    cout << endl << endl << "Fin del ordenamiento " << endl;
    Destruir(v);

    }catch(const bad_alloc &){
    cout << "Error en la asignaci\242n de memoria" <<endl;
} catch(...){
    cout << "Ocurrio\242 un error inesperado" << endl;
}
}
//*************************************************
void GestionQuickSort()
{
    int *v = NULL;
    int dim;

    dim = DimesionVector("Arreglo: ");

    try{
    v = Crear(dim);

    AzarOCapturar(v, dim);

    int velocidadanimacion = Velocidad();
    int mayor = MayorArreglo(v, dim);

    system("cls");
    cout << " >> ORDENAMIENTO QUICK SORT";
    Imprimir(v,dim, 0, dim-1, mayor);
    cout << endl << endl;
    cout << "Proceso de ordenamiento en breve..." << endl;

    QuickSort(v, dim, velocidadanimacion, 0, dim-1, mayor);

    cout << endl << endl << "Fin del ordenamiento " << endl;
    Destruir(v);

    }catch(const bad_alloc &){
    cout << "Error en la asignaci\242n de memoria" <<endl;
} catch(...){
    cout << "Ocurrio\242 un error inesperado" << endl;
}
}
//*************************************************
void GestionMergeSort()
{
    int *v = NULL;
    int dim;

    dim = DimesionVector("Arreglo: ");

    try{
    v = Crear(dim);

    AzarOCapturar(v, dim);

    int velocidadanimacion = Velocidad();
    int mayor = MayorArreglo(v, dim);

    system("cls");
    cout << " >> ORDENAMIENTO MERGE SORT";
    Imprimir(v,dim, 0, dim-1, mayor);
    cout << endl << endl;
    cout << "Proceso de ordenamiento en breve..." << endl;

    MergeSort(v, dim, velocidadanimacion, 0, dim-1, mayor);

    CambiarCursor(ENCENDIDO, NORMAL);
    cout << endl << endl << "Fin del ordenamiento " << endl;
    Destruir(v);


    }catch(const bad_alloc &){
    cout << "Error en la asignaci\242n de memoria" <<endl;
} catch(...){
    cout << "Ocurrio\242 un error inesperado" << endl;
}
}
