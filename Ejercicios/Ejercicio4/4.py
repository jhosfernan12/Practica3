# Interfaz para dispositivos de reproduccion de musica
class ReproductorMusica:
    def reproducir(self):
        pass

# Interfaz para dispositivos de vista de video
class Televisor:
    def mostrarvideo(self):
        pass

# Clase para un reproductor de musica
class ReproductorMP3(ReproductorMusica):
    def reproducir(self):
        print("Reproduciendo musica...")

# Clase para un televisor basico
class TelevisorBasico(Televisor):
    def mostrarvideo(self):
        print("Mostrando video...")


mp3 = ReproductorMP3()
tv = TelevisorBasico()

mp3.reproducir()
tv.mostrarvideo()