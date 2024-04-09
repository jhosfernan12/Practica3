class Forma:  #el comportamiento de las clases  no se modifica al agregar nuevas funciones
    def area(self):
        pass

class Circulo(Forma):
    def __init__(self, radio):
        self.radio = radio

    def area(self):
        return 3.14159 * self.radio * self.radio

class Rectangulo(Forma):
    def __init__(self, ancho, alto):
        self.ancho = ancho
        self.alto = alto

    def area(self):
        return self.ancho * self.alto

def areatotal(formas):
    return sum(forma.area() for forma in formas)


formas = [Circulo(2), Rectangulo(3, 4)]

totalarea = areatotal(formas)

print("El area total de las formas es:", totalarea)
