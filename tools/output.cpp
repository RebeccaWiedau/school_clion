#include "output.h"
#include <iostream>

namespace tools {
    void array_output(int array[], int length) {
        for (int i = 0; i < length; i++) {
            std::cout << array[i] << " ";
        }
        std::cout << std::endl
                  << std::endl;
    }

    void array_output(int array[], int length, std::string message) {
        std::cout << message << std::endl;
        for (int i = 0; i < length; i++) {
            std::cout << array[i] << " ";
        }
        std::cout << std::endl;
    }
    void array_output(char array[], int length) {
        for (int i = 0; i < length; i++) {
            if (!array[i]) continue;
            std::cout << array[i] << " ";
        }
        std::cout << std::endl;
    }


    void array_output(char array[], int length, std::string message) {
        std::cout << message << std::endl;
        for (int i = 0; i < length; i++) {
            std::cout << array[i] << " ";
        }
        std::cout << std::endl
                  << std::endl;
    }


    void array_output(double array[], int length) {
        for (int i = 0; i < length; i++) {
            std::cout << array[i] << " ";
        }
        std::cout << std::endl
                  << std::endl;
    }
    void array_output(double array[], int length, std::string message) {
        std::cout << message << std::endl;
        for (int i = 0; i < length; i++) {
            std::cout << array[i] << " ";
        }
        std::cout << std::endl
                  << std::endl;
    }

    void hexadezimal_array_output(char array[], int length, bool is_negative) {
        bool first_is_not_null = false;
        if (is_negative) {
            std::cout << '-';
        }
        for (int i = 0; i < length; i++) {
            if (array[i] && array[i] != '0')
                first_is_not_null = true;

            if (!array[i] || !first_is_not_null)
                continue;

            std::cout << array[i];
        }
        std::cout << std::endl;
    }
}// namespace tools