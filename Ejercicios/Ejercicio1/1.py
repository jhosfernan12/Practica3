
class Calculadora:  #cada clase tiene una responsabilidad unica
    def sumar(self, a, b):
        return a + b

    def restar(self, a, b):
        return a - b

class VisualizadorResultados:
    def esultado(self, resultado):
        print("El resultado es:", resultado)


calculadora = Calculadora()
visualizador = VisualizadorResultados()


resultadosuma = calculadora.sumar(5, 3)
resultadoresta = calculadora.restar(10, 4)
visualizador.resultado(resultadosuma)
visualizador.resultado(resultadoresta)
