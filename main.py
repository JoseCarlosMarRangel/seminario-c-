from TFecha import tfecha #para importar funciones de otra clase

print("Dime el dia")
d = int(input())

print("Dime el mes")
m = int(input())

print("Dime el anio")
a = int(input())

proyecto = tfecha(d, m, a) #instanciando otra clase como objeto y dandole parametros
print("La fecha es: ",proyecto.dia, "-", proyecto.mes, "-", proyecto.anyo) #imprimir
print(proyecto.esbisiesto())