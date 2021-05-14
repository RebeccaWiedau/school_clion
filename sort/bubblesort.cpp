#include "bubblesort.h"
#include "../tools/output.h"
#include "iostream"
namespace sort {
  void bubblesort(int array[], int array_length)
  {
    bool is_sorted = false;
    int loops = 0;
    while (!is_sorted) {

      is_sorted = true;
      for (int i = 0; i < array_length - 1; i++) {
        if (array[i] > array[i + 1]) {
          int temp = array[i + 1];
          array[i + 1] = array[i];
          array[i] = temp;
          is_sorted = false;
        }
      }
      loops++;
    }
    std::cout << loops << std::endl;
  }

  void bubblesort(char array[], int array_length)
  {
    bool is_sorted = false;
    int loops = 0;
    while (!is_sorted) {

      is_sorted = true;
      for (int i = 0; i < array_length - 1; i++) {
        if (array[i] > array[i + 1]) {
          int temp = array[i + 1];
          array[i + 1] = array[i];
          array[i] = temp;
          is_sorted = false;
        }
      }
      loops++;
    }
    std::cout << loops << std::endl;
  }
  void bubblesort_student(char** array[], int array_length)
  {
    bool is_sorted = false;
    int loops = 0;
    char** surenames = array[0];
    char** firstname = array[1];
    while (!is_sorted) {
      is_sorted = true;
      for (int i = 0; i < array_length - 1; i++) {
        bool need_swap = is_greater(surenames[i], surenames[i + 1]);
        if (need_swap) {
          char* temp_p = surenames[i];
          surenames[i] = surenames[i + 1];
          surenames[i + 1] = temp_p;
          temp_p = firstname[i];
          firstname[i] = firstname[i + 1];
          firstname[i + 1] = temp_p;
          is_sorted = false;
        }
      }
    }
  }

  bool is_greater(char* a, char* b)
  {
    // a > b?
    int i = 0;
    while (a[i] == b[i] && i < 4) {
      i++;
    }
    return a[i] > b[i];
  }
}// namespace sort