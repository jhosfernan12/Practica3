# Interfaz para el envio de mensajes
class Mensaje:
    def enviar(self):
        pass

# Clase concreta para enviar mensajes por correo electronico
class CorreoElectronico(Mensaje):
    def enviar(self):
        print("Mensaje enviado por correo electronico")

# Clase concreta para enviar mensajes por SMS
class SMS(Mensaje):
    def enviar(self):
        print("Mensaje enviado por SMS")

# Clase de alto nivel que depende de la interfaz Mensaje
class Notificador:
    def __init__(self, mensaje):
        self.mensaje = mensaje

    def enviarmensaje(self):
        self.mensaje.enviar()

correo = CorreoElectronico()
notificadorcorreo = Notificador(correo)
notificadorcorreo.enviamensaje()

sms = SMS()
notificadorsms = Notificador(sms)
notificadorsms.enviarmensaje()
