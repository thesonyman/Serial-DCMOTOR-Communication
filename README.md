# Serial-DCMOTOR-Communication

This doesnt curretly work but it might soon. :)
Basicly since serial only has one output pin we have to cheat to get to modes. Since it can be in two states ON/OFF 
this is simple to do with a arduino.
So I take the output pin on the serial connecter and connect it to pin 8 which is set to input.
then pin 7 and 6 are set to LOW which is ground. From there I take four wires connct one from pin 6 and 7 to the two motor
inputs make sure they are the opisite. Then take a battery and put the other 2 wires on the positive of the battery then put
it on the inputs of the motor MAKE SURE EACH GETS ONE OR THIS WONT WORK.So Basicly what you just did was made it when you want to go into reverse forward becomes all positive so it does nothing and negitive gets ground and so fourth.
