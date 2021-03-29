#pragma once
#include <string>

namespace tools {
  void array_output (int array[], int length);
  void array_output (int array[], int length, std::string message);
  void array_output (char array[], int length);
  void array_output (char array[], int length, std::string message);
  void array_output (double array[], int length);
  void array_output (double array[], int length, std::string message);
}