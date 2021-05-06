#include <iostream>


class TFecha
{
public:// Parte pública de la clase
TFecha( ); //Constructor por defecto
TFecha(int,int,int ); //Constructor sobrecargado
TFecha(TFecha&); //Constructor de copia
~TFecha( ); //Destructor
};
TFecha::TFecha(int d, int m, int a)
{ // Inicializamos la fecha a 01/01/1900.
int dia = d; //También podríamos poner AsignarDia(1);
int mes = m; //También podríamos poner AsignarMes(1);
int anyo = a; //También AsignarAnyo(1900);
}