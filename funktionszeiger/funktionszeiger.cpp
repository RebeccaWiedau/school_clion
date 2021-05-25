#include "funktionszeiger.h"
#include <iostream>

namespace funktionszeiger {
    void hexadezimal(int zahl) {
        std::cout << "Test " << std::hex << zahl << std::endl;
    }
    void dezimal(int zahl) {

        std::cout << zahl << std::endl;
        std::cout << "Test " << std::dec << zahl << std::endl;
    }
    void oktal(int zahl) {

        if (-7 <= zahl && zahl <= 7) {
            std::cout << zahl << std::endl;
            return;
        }

        int potenz = 10;
        int result = 0;

        result = zahl % 8;
        zahl = zahl / 8;

        if (zahl > 8) {
            result += (zahl % 8) * 10;
            zahl = zahl / 8;
        } else {
            result += zahl / 8 * potenz;
        }
        std::cout << result << std::endl;
        std::cout << zahl << std::endl;


//        std::cout << "Test " << std::oct << zahl << std::endl;
    }


    void funktionszeiger() {
        void (*funk_p[3])(int);
        funk_p[0] = hexadezimal;
        funk_p[1] = oktal;
        funk_p[2] = dezimal;
        int zahl = 203;
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