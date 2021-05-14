#include "student_array.h"
#include <iostream>
#include "../tools/output.h"
#include "../sort/bubblesort.h"
namespace student_array {

  void student_array()
  {
    int amount_names = 22;
      std::cout << "Anzahl eingeben: ";
      std::cin >> amount_names;

    char** student_surenames = new char*[amount_names];
    char** student_firstnames = new char*[amount_names];
    for (int i = 0; i < amount_names; i++) {
      student_surenames[i] = new char[30];
      student_firstnames[i] = new char[30];
      std::cout << "Nachname: ";
      std::cin >> student_surenames[i];
      std::cout << "Vorname: ";
      std::cin >> student_firstnames[i];

    }
  char** students[2];
  students[0] = student_surenames;
  students[1] = student_firstnames;

  student_output(students, amount_names);
    std::cout << "\nSORT\n";
    sort::bubblesort_student(students, amount_names);
    student_output(students, amount_names);
  }



  void student_output(char** array[], int length)
    {
      for (int i = 0; i < length; i++) {
        std::cout << array[0][i] << ", " << array[1][i] << std::endl;
      }
      std::cout << std::endl;
    }
  }
