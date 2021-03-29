#include "output.h"
#include <iostream>

namespace tools {
  void array_output(int array[], int length) {
    for (int i = 0; i < length; i++) {
      std::cout << array[i] << " ";
    }
    std::cout << std::endl << std::endl;
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
      std::cout << array[i] << " ";
    }
    std::cout << std::endl;
  }
  void array_output(char array[], int length, std::string message) {
    std::cout << message << std::endl;
    for (int i = 0; i < length; i++) {
      std::cout << array[i] << " ";
    }
    std::cout << std::endl << std::endl;
  }


  void array_output(double array[], int length) {
    for (int i = 0; i < length; i++) {
      std::cout << array[i] << " ";
    }
    std::cout << std::endl << std::endl;
  }
  void array_output(double array[], int length, std::string message) {
    std::cout << message << std::endl;
    for (int i = 0; i < length; i++) {
      std::cout << array[i] << " ";
    }
    std::cout << std::endl << std::endl;
  }
}