#include "Utileria.hpp"
#include "HerramientasGestion.hpp"

using std:: cout;
using std:: endl;

//*************************************************
void Capturar(int a[], int n)
{
    cout << endl << "Los valores que ingrese deben ser positivos y no m\240s de " << MAXASTERISCOS << endl;
    //MAL
    for(int i = 0 ; i < n ; ++i){
                cout << "Elemento " << i+1;
                a[i] = CapturarElementos(":  ");
    }
}
//*************************************************
void Azar(int a[], int n)
{
    srand(time(NULL));
    for(int i = 0 ; i < n ; ++i){
        a[i] = 1+rand()%(MAXASTERISCOS);
    }
}
//*************************************************
int Velocidad()
{
    cout << endl << "Velocidades de animaci\242n:" << endl;
    cout << "\t 0) R\240pida" << endl;
    cout << "\t 1) Media" << endl;
    cout << "\t 2) Lenta" << endl << endl;
    int opcion;

    do{
        opcion = CapturarEntero("\250Qu\202 velocidad quiere la animaci\242n? ");
    } while(opcion!=RAPIDO && opcion!=MEDIO && opcion!=LENTO);

    switch(opcion)
    {
        case RAPIDO:
            return 0;
            break;
        case MEDIO:
            return 40;
            break;
        case LENTO:
            return 80;

    }
}

//*********************************************************
void AzarOCapturar(int a[], int n)
{
    int opcion;
    cout << endl << "M\202todo de llenado: " << endl;
    cout << "\t 0. Al azar" << endl;
    cout << "\t 1. Captura Manual" << endl << endl;
    do{
        opcion = CapturarEntero("\250C\242mo desea obtener los datos? ");
    } while(opcion!=1 && opcion!=0);

    if(opcion == 1){
        Capturar(a,n);
    } else{
        Azar(a,n);
    }
}
