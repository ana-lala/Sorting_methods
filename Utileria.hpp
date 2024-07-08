#ifndef UTILERIA_HPP_INCLUDED
#define UTILERIA_HPP_INCLUDED
#include <limits>
#include <iostream>
#include <windows.h>

#define MAXTAMARR 100
#define MAXASTERISCOS 22

/** Estado cursor */
enum EstadoCursor{
	APAGADO,    /**< Cursor no visible */
	ENCENDIDO   /**< Cursor visible */
};
/** Estado cursor */
enum ModoCursor{
	MINI = 5,       /**< Tama&ntilde;o de cursor peque&ntilde;o */
	NORMAL = 40,    /**< Tama&ntilde;o de cursor mediano  */
	SOLIDO = 80     /**< Tama&ntilde;o de cursor grande */
};


int CapturarEntero(const char solicitud[]);
int CapturarElementos(const char solicitud[]);
void Imprimir(const int v[],int n);
void MoverCursor(short x, short y);
void CambiarCursor(EstadoCursor estado, ModoCursor modo);
int DimesionVector(const char NombreVector[]);


#endif // UTILERIA_HPP_INCLUDED
