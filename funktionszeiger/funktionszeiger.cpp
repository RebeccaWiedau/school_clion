#include "funktionszeiger.h"
#include "../tools/output.h"
#include <iostream>

namespace funktionszeiger {
    void hexadezimal(int zahl) {
        int original_number = zahl;
        char hex_char[16] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F'};
        bool is_negative = false;
        if (zahl < 0) {
            is_negative = true;
            zahl *= -1;
        }

        if (under_digit(16, zahl)) {
            std::cout << original_number << " in hex:\n"
                      << hex_char[zahl] << std::endl;
            return;
        }

        int dezimal_digit = dezimal_digit_count(zahl);
        char *ch_result = new char[dezimal_digit];

        for (int i = dezimal_digit; i > 0; i--) {
            ch_result[i - 1] = hex_char[(zahl % 16)];
            zahl /= 16;
        }

        std::cout << original_number << " in hex:" << std::endl;
        tools::hexadezimal_array_output(ch_result, dezimal_digit, is_negative);

        delete[] ch_result;
    }
    void dezimal(int zahl) {
        std::cout << " in decimal:\n"
                  << std::endl;
        std::cout << zahl << std::endl;
    }

    void oktal(int zahl) {
        int original_number = zahl;

        if (under_digit(8, zahl)) {
            std::cout << original_number << " in octal:\n"
                      << zahl << std::endl;
            return;
        }

        int octal_digit_potency = 1;
        int result = 0;

        do {
            result += (zahl % 8) * octal_digit_potency;
            zahl /= 8;
            octal_digit_potency *= 10;
        } while (zahl != 0);

        std::cout << original_number << " in octal:\n"
                  << result << std::endl;
    }

    bool under_digit(int digit_system, int number) {
        return (number < digit_system && -digit_system < number);
    }

    void funktionszeiger() {
        void (*funk_p[3])(int);
        funk_p[0] = hexadezimal;
        funk_p[1] = oktal;
        funk_p[2] = dezimal;
        int zahl = 0;
        int eingabe = 0;
        std::cout << "Bitte Zahl eingeben: ";
        std::cin >> zahl;
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

    int dezimal_digit_count(int zahl) {
        int count = 0;
        while (zahl != 0) {
            zahl /= 10;
            count++;
        }
        return count;
    }
}// namespace funktionszeiger