#include <iostream> //las subclases deben ser intercambiables por sus clases base sin alterar el comportamiento del programa
using namespace std;

class Forma 
{
public:
    virtual double calcularArea() const = 0;
};


class Rectangulo : public Forma 
{
private:
    double ancho;
    double altura;

public:
    Rectangulo(double ancho, double altura) : ancho(ancho), altura(altura) {}

    double calcularArea() const override 
    {
        return ancho * altura;
    }
};

class Cuadrado : public Rectangulo 
{
public:
    Cuadrado(double lado) : Rectangulo(lado, lado) {}
};


double calcularArea(const Forma& forma) 
{
    return forma.calcularArea();
}

int main() 
{
    Rectangulo rectangulo(3, 4);
    Cuadrado cuadrado(5);

    cout << "Area del rectangulo: " << calcularArea(rectangulo) << endl;
    cout << "Area del cuadrado: " << calcularArea(cuadrado) << endl;

    return 0;
}
