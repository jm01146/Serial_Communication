This is for communicating to an Arduino via serial port. I can use this via RaspberryPi or my laptop.
I wanted to store this code so everyone can find this easily (And so I can find this easily).

Essentially you connect to the port your arduino is connected to and send strings thats about it.
Your arduino needs to be programmed to response to the SPECIFIC case that it recives.

If you send 'on' on your laptop and your Arduino is waiting for 'On' welp its not gonna work.
So keep this in mind, I don't know if this code is everywhere and everyone knows about it but in case this isn't true here yall go.

I added the arduino codes that showcase the bluetooth control and the serial USB control programs.
The only thing that needs concern is that the circuit diagram for the HC-06/05 you need resistors to the TX/RX pins to the rest of the device to not burn it out.
I sadly don't know how to insert pics here when I do find out I will show it because that is important.
