#include <iostream>
using namespace std;

class Forma 
{
public:
    virtual double area() const = 0;
};


class Circulo : public Forma 
{
private:
    double radio;

public:
    Circulo(double r) : radio(r) {}

    double area() const override 
    {
        return 3.14159 * radio * radio;
    }
};

class Rectangulo : public Forma 
{
private:
    double ancho;
    double alto;

public:
    Rectangulo(double a, double b) : ancho(a), alto(b) {}

    double area() const override 
    {
        return ancho * alto;
    }
};


double areaTotal(const Forma** formas, int numFormas) 
{
    double total = 0.0;

    for (int i = 0; i < numFormas; ++i) 
    {
        total += formas[i]->area();
    }
    return total;
}

int main() 
{
    const Forma* formas[] = { new Circulo(2), new Rectangulo(3, 4) };

    double totalArea = areaTotal(formas, 2);

    cout << "El area total de las formas es: " << totalArea << endl;

    delete formas[0];
    delete formas[1];

    return 0;
}
