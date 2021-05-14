#include "student_array.h"
#include <iostream>
#include "../tools/output.h"
namespace student_array {

  void student_array()
  {
    int amount_names = 22;
    //  std::cout << "Anzahl eingeben: ";
    //  std::cin >> amount_names;

    char** student_names = new char*[amount_names];
    for (int i = 0; i < amount_names; i++) {
      student_names[i] = new char[30];
      std::cin >> student_names[i];
    }

    for (int i = 0; i < amount_names; i++) {
      tools::array_output(student_names[i], 30);
    }
  }
}