# Las subclases deben ser intercambiables por sus clases base sin alterar el comportamiento del programa
class Forma:
    def calcular_area(self):
        pass

class Rectangulo(Forma):
    def __init__(self, ancho, altura):
        self.ancho = ancho
        self.altura = altura

    def calcular_area(self):
        return self.ancho * self.altura

class Cuadrado(Rectangulo):
    def __init__(self, lado):
        super().__init__(lado, lado)

def calculararea(forma):
    return forma.calculararea()


rectangulo = Rectangulo(3, 4)
cuadrado = Cuadrado(5)

print("Area del rectangulo:", calculararea(rectangulo))
print("Area del cuadrado:", calculararea(cuadrado))
