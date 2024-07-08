#include "Utileria.hpp"
#include <iostream>
#include <limits>

using std:: cout;
using std:: cin;
using std:: endl;
using std:: numeric_limits;


//*************************************************
int CapturarEntero(const char solicitud[])
{
    int x;
    cout << solicitud;
    cin >> x;
    while(cin.fail() || x != (int)x || x<0){
        cout << "Error: valor no v\240lido ";
        if(x<0){
            cout << "Este elemento no es positivo. Ingrese otro.";
        } else if(cin.fail()){
            cin.clear();
            cin.ignore(numeric_limits<int>::max(),'\n');
        }
        else{
            cout << ", se espera un n\243mero entero" << endl;
        }
        cout << solicitud;
        cin >> x;
    }
    return x;
}
//*************************************************
int CapturarElementos(const char solicitud[])
{
    int x;
    cout << solicitud;
    cin >> x;
    while(cin.fail() || x != (int)x || x<=0 || x>MAXASTERISCOS){
        cout << "Error: valor no v\240lido";
        if(cin.fail()){
            cin.clear();
            cin.ignore(numeric_limits<int>::max(),'\n');
        }
        else if(x<=0){
            cout << ". Este elemento no es positivo. Ingrese otro";
        }else if(x>MAXASTERISCOS){
            cout << ". Supera el limite del m\240ximo de asteriscos " << MAXASTERISCOS << ". Ingrese otro";
        }

        else{
            cout << ", se espera un n\243mero entero" << endl;
        }
        cout << solicitud;
        cin >> x;
    }
    return x;
}
//***************************************************************************
void MoverCursor(short x, short y)
{
    COORD coord = {x, y};
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}
//******************************************************************************
void CambiarCursor(EstadoCursor estado, ModoCursor modo)
{
    CONSOLE_CURSOR_INFO ConCurInf = {modo, estado};

    SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &ConCurInf);
}
//******************************************************************************
int DimesionVector(const char NombreVector[])
{
    cout << endl << "CAPTURA DE DATOS" << endl << endl;
    int dim;
    do{
            cout << "Rango[10, 100]" << endl;
        dim = CapturarEntero("\250Cu\240ntos valores desea capturar?: ");
    }while(dim < 9 || dim >100);
    return dim;
}
