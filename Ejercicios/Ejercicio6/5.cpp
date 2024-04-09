#include <iostream>
using namespace std;

// Interfaz para el envio de mensajes
class Mensaje 
{
public:
    virtual void enviar() = 0;
};

// Clase concreta para enviar mensajes por correo electronico
class CorreoElectronico : public Mensaje 
{
public:
    void enviar() override 
    {
        cout << "Mensaje enviado por correo electronico" << endl;
    }
};

// Clase concreta para enviar mensajes por SMS
class SMS : public Mensaje 
{
public:
    void enviar() override 
    {
        cout << "Mensaje enviado por SMS" << endl;
    }
};

// Clase de alto nivel que depende de la interfaz Mensaje
class Notificador 
{
private:
    Mensaje* mensaje;

public:
    Notificador(Mensaje* mensaje) : mensaje(mensaje) {}

    void enviarMensaje() 
    {
        mensaje->enviar();
    }
};

int main() 
{
    Mensaje* correo = new CorreoElectronico();
    Notificador notificadorCorreo(correo);
    notificadorCorreo.enviarMensaje();

    Mensaje* sms = new SMS();
    Notificador notificadorSMS(sms);
    notificadorSMS.enviarMensaje();

    delete correo;
    delete sms;

    return 0;
}
