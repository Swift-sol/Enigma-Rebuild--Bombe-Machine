//
// Created by supersu on 26/04/2020.
//

#include "Rotor.h"

Rotor::Rotor(string alphabet_configuration) {
    _letters = new char[alphabet_configuration.length() + 1];
    strcpy(_letters, alphabet_configuration.c_str());
}

void Rotor::showRotor() {
    int counter = 0, actualPosition = _initialPosition;
    while (counter < strlen(_letters)) {
        cout << "pos: " << actualPosition  << ", letter: " << _letters[actualPosition] << endl;
        if(actualPosition == strlen(_letters)-1)
            actualPosition=0;
        else
            actualPosition++;
        counter++;
    }
}

void Rotor::setInitialPosition(int initialPosition) {
    _initialPosition = initialPosition;
}

void Rotor::encrypt(string message) {
    string message_encrypt="";
    //TODO encryp the message here
    return message_encrypt;
}
