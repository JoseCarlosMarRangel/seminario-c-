class Tfecha
{
public:// Parte pública de la clase
TFecha( ); //Constructor por defecto
TFecha(int,int,int ); //Constructor sobrecargado
TFecha(TFecha&); //Constructor de copia
~TFecha( ); //Destructor

};
TFecha::TFecha(int d, int m, int a)
{
dia = d; //O bien, AsignarDia(d);
mes = m; //O bien, AsignarMes(m);
anyo = a; //O bien, AsignarAnyo(a);
}