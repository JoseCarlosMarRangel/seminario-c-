class TFecha {
public:
void setDia(int d) {dia = d;} //inline
void setMes(int m) { mes = m; } // inline
void setAnyo(int a) { anyo = a; } // inline
int getDia() { return dia; } // inline
int getMes() { return mes; } // inline
int getAnyo() { return anyo; } // inline
bool esBisiesto() {return ((anyo%4)==0);}
//inline
private: // Parte privada de la clase
int dia, mes, anyo;
};