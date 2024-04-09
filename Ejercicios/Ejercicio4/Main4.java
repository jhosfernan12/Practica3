// Interfaz para dispositivos de reproduccion de musica
interface ReproductorMusica 
{
    void reproducir();
}

// Interfaz para dispositivos de vista de video
interface Televisor 
{
    void mostrarVideo();
}

// Clase para un reproductor de música
class ReproductorMP3 implements ReproductorMusica 
{
    @Override
    public void reproducir() 
    {
        System.out.println("Reproduciendo música...");
    }
}

// Clase para un televisor básico
class TelevisorBasico implements Televisor 
{
    @Override
    public void mostrarVideo() 
    {
        System.out.println("Mostrando video...");
    }
}

public class Main4 
{
    public static void main(String[] args) 
    {
        ReproductorMusica mp3 = new ReproductorMP3();
        Televisor tv = new TelevisorBasico();

        mp3.reproducir();
        tv.mostrarVideo();
    }
}
