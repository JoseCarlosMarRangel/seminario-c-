class tfecha(object):

	def __init__(self, dia, mes, anyo): #definir variables
		self.dia = dia
		self.mes = mes
		self.anyo = anyo

	def esbisiesto(self):	
		if self.anyo % 4 == 0 and (self.anyo % 100 != 0 or anyo % 400 == 0):
			print("Es bisiesto")
		else:
			print("No es bisiesto")