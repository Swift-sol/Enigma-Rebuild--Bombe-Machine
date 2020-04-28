# Rebuild Bombe Machine 

<img src="images/enigma.jpg" style="zoom:25%;" />

A [enigma machine](https://en.wikipedia.org/wiki/Enigma_machine) write in C++. 



## How does Enigma work? ⚙️

*Numberphile* has a [great video](https://www.youtube.com/watch?v=G2_Q9FoD-oQ) that explain each step, since a message is received and encoded, until it is decoded. 

Also his counterpart [explanation in spanish](https://www.youtube.com/watch?v=VnsTHAH5yAE), thanks to the explanation of the *University of Burgos*.



## Technical specification of the enigma rotors 📚

       Wheel          Wiring              Notch   Turnover
        No.   ABCDEFGHIJKLMNOPQRSTUVWXYZ
    
         I    EKMFLGDQVZNTOWYHXUSPAIBRCJ    Y        Q
        II    AJDKSIRUXBLHWTMCQGZNPYFVOE    M        E
       III    BDFHJLCPRTXVZNYEIWGAKMUSQO    D        V
        IV    ESOVPZJAYQUIRHXLNFTGKDCMWB    R        J
         V    VZBRGITYUPSDNHLXAWMJQOFECK    H        Z

 


1.	**Notch**: location of notch on the index ring.
2.	**Turnover**: letter appearing in window when the notch is engaged with the stepping lever.
3.	**Wheels** Beta and Gamma have index rings but no notches.
4.	'Thin' **reflectors** B and C are used only in the Model M-4 with Beta and Gamma wheels.
5.	All **wiring** measurements are made – per convention – with Ringstellung = ‘A’. Alphabet rotates clockwise when viewed ‘through’ the Eintrittwalze along the wheel axis.

