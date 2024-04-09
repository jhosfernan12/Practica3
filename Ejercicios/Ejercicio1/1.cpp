#include <iostream> 

using namespace std; 

class Calculadora     //cada clase tiene una responsabilidad unica
{
public:
    int sumar(int a, int b) 
    {
        return a + b;
    }

    int restar(int a, int b) 
    {
        return a - b;
    }
};


class VisualizadorResultados 
{
public:
    void mostrarResultado(int resultado) 
    {
        cout << "El resultado es: " << resultado << endl;
    }
};

int main() 
{
 
    Calculadora calculadora;
    VisualizadorResultados visualizador;


    int resultadoSuma = calculadora.sumar(5, 3);
    int resultadoResta = calculadora.restar(10, 4);


    visualizador.mostrarResultado(resultadoSuma);
    visualizador.mostrarResultado(resultadoResta);

    return 0;
}
