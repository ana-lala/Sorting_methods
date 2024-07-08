#include "HerramientasVectores.hpp"
#include "Utileria.hpp"

using std:: cout;

//*************************************************
void Imprimir(const int a[],int n, int inicio, int fin, int mayor)
{
    for(int j = inicio; j<=fin; ++j){
        for(int i = 0 ; i < mayor; ++i){
            MoverCursor(j, i+3);
            if(a[j]>= (mayor-i)){
                cout << char(179);
            } else{
                cout << " ";
            }
        }
    }
}
//*************************************************
void Destruir(int *& v) //Voy a recibir una referencia a puntero a float
{
    delete[] v;
    v = NULL;
}
//***************************************************
int *Crear(int n)
{
    return new int[n];
}

//**************************************************
int MayorArreglo(const int a[], int n)
{
    int mayor = a[0];
    for(int i = 0; i<n; i++){
        if(a[i] > mayor){
            mayor = a[i];
        }
    }
    return mayor;

}
