//
// Created by supersu on 26/04/2020.
//

#include <sstream>
#include "Rotor.h"

Rotor::Rotor(string alphabet_configuration) {
    _letters = new char[alphabet_configuration.length() + 1];
    strcpy(_letters, alphabet_configuration.c_str());
}

void Rotor::showRotor() {
    int counter = 0, actualPosition = _initialPosition;
    while (counter < strlen(_letters)) {
        cout << "pos: " << actualPosition << ", letter: " << _letters[actualPosition] << endl;
        if (actualPosition == strlen(_letters) - 1)
            actualPosition = 0;
        else
            actualPosition++;
        counter++;
    }
}

void Rotor::setInitialPosition(int initialPosition) {
    _initialPosition = initialPosition;
}

void Rotor::rotateRotor() {
    _initialPosition = strlen(_letters) % (_initialPosition + 1) + 1;
}

char Rotor::getWord(char word, string alphabet) {
    if (islower(word)) {
        word = toupper(word);
    }
    int position = 0;
    for (int i = 0; i < alphabet.length(); ++i) {
        if (word == alphabet[i]) {
            position = i;
            break;
        }
    }
    // Have a mistake here
    return _letters[strlen(_letters) % (position + _initialPosition)];
}

// TODO debug
void Rotor::encrypt(string message, string alphabet) {
    string message_encrypt = "";
    stringstream ss_message(message);
    string word;

    while (ss_message >> word) {
        char word_converted;
        strcpy(reinterpret_cast<char *>(word_converted), word.c_str());
    }

    message_encrypt += getLetter()
    return message_encrypt;
}
