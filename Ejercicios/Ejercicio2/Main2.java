import java.util.ArrayList;
import java.util.List;


interface Forma   //el comportamiento de las clases  no se modifica al agregar nuevas funciones
{
    double area();
}


class Circulo implements Forma 
{
    private double radio;

    public Circulo(double radio) 
    {
        this.radio = radio;
    }

    public double area() 
    {
        return 3.14159 * radio * radio;
    }
}


class Rectangulo implements Forma 
{
    private double ancho;
    private double alto;

    public Rectangulo(double ancho, double alto) 
    {
        this.ancho = ancho;
        this.alto = alto;
    }

    public double area() 
    {
        return ancho * alto;
    }
}

public class Main2 
{
    // Función para calcular el área total de un conjunto de formas
    public static double areaTotal(List<Forma> formas) {
        double total = 0.0;
        for (Forma forma : formas) {
            total += forma.area();
        }
        return total;
    }

    public static void main(String[] args) {
        List<Forma> formas = new ArrayList<>();
        formas.add(new Circulo(2));
        formas.add(new Rectangulo(3, 4));

        double totalArea = areaTotal(formas);

        System.out.println("El área total de las formas es: " + totalArea);
    }
}
