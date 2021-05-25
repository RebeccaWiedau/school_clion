#include "funktionszeiger.h"
#include <iostream>

namespace funktionszeiger {
    void hexadezimal(int zahl) {
        bool is_negative = false;

        if (zahl < 0) {
            zahl = abs(zahl);
            is_negative = true;
        }


        // CODE
        if (is_negative) {
            zahl = -zahl;
        }
        std::cout << "Test " << std::hex << zahl << std::endl;
    }
    void dezimal(int zahl) {

        std::cout << zahl << std::endl;
        std::cout << "Test " << std::dec << zahl << std::endl;
    }
    void oktal(int zahl) {
        int original_number = zahl;

        if (under_digit(8, zahl)) {
            std::cout << original_number << " in octal: " << zahl << std::endl;
            return;
        }

        int octal_digit_potency = 1;
        int result = 0;

        do {
            result += (zahl % 8) * octal_digit_potency;
            zahl /= 8;
            octal_digit_potency *= 10;
        } while (zahl != 0);

        std::cout << original_number << " in octal: " << result << std::endl;
        auto vorzeichen = '+';
        if (original_number < 0) vorzeichen = '-';
        std::cout << "Gegen Test: " << std::oct << vorzeichen << abs(original_number) << std::endl;
    }



    bool under_digit(int digit_system, int number) {
        return (number > digit_system && -digit_system > number);
    }

    void funktionszeiger() {
        void (*funk_p[3])(int);
        funk_p[0] = hexadezimal;
        funk_p[1] = oktal;
        funk_p[2] = dezimal;
        int zahl = 42453;
        int eingabe;
        //        std::cout << "Bitte Zahl eingeben: ";
        //        std::cin >> zahl
        do {
            std::cout << "1: hex, 2: okt, 3:dez: \n";
            std::cin >> eingabe;
            if (4 > eingabe && eingabe > 0) {
                funk_p[eingabe - 1](zahl);
            } else if (eingabe != 0) {
                std::cout << "Ungueltig" << std::endl;
            }
        } while (eingabe != 0);
    }
}// namespace funktionszeiger