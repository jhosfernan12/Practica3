// Interfaz para el envio de mensajes
interface Mensaje 
{
    void enviar();
}

// Clase concreta para enviar mensajes por correo electronico
class CorreoElectronico implements Mensaje 
{
    @Override
    public void enviar() 
    {
        System.out.println("Mensaje enviado por correo electronico");
    }
}

// Clase concreta para enviar mensajes por SMS
class SMS implements Mensaje 
{
    @Override
    public void enviar() 
    {
        System.out.println("Mensaje enviado por SMS");
    }
}

// Clase de alto nivel que depende de la interfaz Mensaje
class Notificador 
{
    private Mensaje mensaje;

    public Notificador(Mensaje mensaje) 
    {
        this.mensaje = mensaje;
    }

    public void enviarMensaje()
    
    {
        mensaje.enviar();
    }
}

public class Main5 {
    public static void main(String[] args) 
    {
        Mensaje correo = new CorreoElectronico();
        Notificador notificadorCorreo = new Notificador(correo);
        notificadorCorreo.enviarMensaje();

        Mensaje sms = new SMS();
        Notificador notificadorSMS = new Notificador(sms);
        notificadorSMS.enviarMensaje();
    }
}
