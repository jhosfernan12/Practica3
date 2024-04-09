
class Calculadora   //cada clase tiene una responsabilidad unica
{
    public int sumar(int a, int b) 
    {
        return a + b;
    }

    public int restar(int a, int b) 
    {
        return a - b;
    }
}


class VisualizadorResultados 
{
    public void mostrarResultado(int resultado) 
    {
        System.out.println("El resultado es: " + resultado);
    }
}

public class Main 
{
    public static void main(String[] args) 
    {
 
        Calculadora calculadora = new Calculadora();
        VisualizadorResultados visualizador = new VisualizadorResultados();

  
        int resultadoSuma = calculadora.sumar(5, 3);
        int resultadoResta = calculadora.restar(10, 4);

    
        visualizador.mostrarResultado(resultadoSuma);
        visualizador.mostrarResultado(resultadoResta);
    }
}
