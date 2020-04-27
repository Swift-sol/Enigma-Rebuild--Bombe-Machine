//
// Created by supersu on 26/04/2020.
//

#ifndef ENIGMA_ROTOR_H
#define ENIGMA_ROTOR_H

#include <iostream>

using namespace std;

class Rotor {
private:
    char *_letters;
    int _initialPosition;
public:
    Rotor(string alphabet_configuration);

    void showRotor();

    void setInitialPosition(int initialPosition);

    void encrypt(string message, string alphabet);

    void rotateRotor();

    char getLetter(int position);
};


#endif //ENIGMA_ROTOR_H
