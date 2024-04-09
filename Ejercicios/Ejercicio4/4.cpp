#include <iostream>
using namespace std;

// Interfaz para dispositivos de reproduccion de musica
class ReproductorMusica 
{
public:
    virtual void reproducir() = 0;
};

// Interfaz para dispositivos de vista de video
class Televisor 
{
    public:
        virtual void mostrarVideo() = 0;
};

// Clase para un reproductor de música
class ReproductorMP3 : public ReproductorMusica 
{
    public:
        void reproducir() override 
        {
            cout << "Reproduciendo música..." << endl;
        }
};

// Clase para un televisor básico
class TelevisorBasico : public Televisor 
{
public:
    void mostrarVideo() override 
    {
        cout << "Mostrando video..." << endl;
    }
};

int main() 
{
    ReproductorMusica* mp3 = new ReproductorMP3();
    Televisor* tv = new TelevisorBasico();

    mp3->reproducir();
    tv->mostrarVideo();

    delete mp3;
    delete tv;

    return 0;
}
