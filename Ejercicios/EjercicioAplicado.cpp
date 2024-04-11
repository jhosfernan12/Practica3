#include <iostream>
#include <vector>
#include <string>

using namespace std;

// Principio de Responsabilidad Unica (SRP):

// Modulo para la gestion de proyectos
class AdministradorProyectos 
{
public:
    void crearProyecto(string nombreProyecto) 
    {
        // creamos el proyecto
    }

    void eliminarProyecto(string nombreProyecto) 
    {
        // eliminamos el proyecto
    }
};


class AdministradorComentarios 
{
public:
    void agregarComentario(string comentario) 
    {
        // agregamos un comentario
    }

    void eliminarComentario(int idComentario) 
    {
        // eliminamos un comentario
    }
};


class AdministradorArchivos 
{
public:
    void subirArchivo(string nombreArchivo) 
    {
        // Logica para subir un archivo
    }

    void eliminarArchivo(string nombreArchivo) 
    {
        // Logica para eliminar un archivo
    }
};

// Principio Abierto/Cerrado (OCP):

// Interfaz para proyectos
class Proyecto 
{
public:
    virtual void crear() = 0;
    virtual void eliminar() = 0;
};

// Interfaz para los comentarios
class Comentario 
{
    public:
        virtual void agregar() = 0;
        virtual void eliminar() = 0;
};


class Archivo 
{
    public:
        virtual void subir() = 0;
        virtual void eliminar() = 0;
};

//No se necesita Principio de Sustitucion de Liskov (LSP) pues las subclases deben ser intercambiables con las clases padre.

// No se necesita Principio de Segregacion de Interfaces interfaces especificas ya han sido definidas en las clases anteriores.

//No se necesita Principio de Inversion de Dependencia (DIP) porque Los modulos de alto nivel dependen de las interfaces, no de las implementaciones concretas.

int main() 
{

    AdministradorProyectos adminProyectos;
    AdministradorComentarios adminComentarios;
    AdministradorArchivos adminArchivos;

    adminProyectos.crearProyecto("Proyecto1");
    adminComentarios.agregarComentario("Este es un comentario");
    adminArchivos.subirArchivo("archivo.txt");

    return 0;
}
