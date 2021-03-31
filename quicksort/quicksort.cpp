#include "quicksort.h"
#include "../tools/output.h"
#include <iostream>

void quicksort(int array[], int length, int index_left, int index_right, bool kill_switch)
{

  if (index_left >= index_right) return;
  int pivot_index = index_right;
  int pivot = array[pivot_index];
  bool pivot_swaped = false;

  for (int i = index_left; i < pivot_index; i++) {
    if (pivot_swaped) break;
    if (array[i] > pivot) {
      for (int j = index_right; j >= -1; j--) {
        if (j < i) {
          array[pivot_index] = array[i];
          array[i] = pivot;
//          tools::array_output(array, 14, "End");
          pivot_swaped = true;
          pivot_index = i;
          break;
        }

        if (j >= 0 && array[j] < pivot) {
          int temp = array[j];
          array[j] = array[i];
          array[i] = temp;
//          tools::array_output(array, 14, "Swap");
          break;
        }
      }
    }
  }

  bool pivot_is_left = pivot_index == index_left;
  bool pivot_is_right = pivot_index == index_right;

  if (pivot_is_left) {
//    std::cout << "LEFT\n";
//    std::cout << pivot_index << std::endl;
    quicksort(array, length, index_left + 1, index_right);
  }
  else if (pivot_is_right) {
//    std::cout << "RIGHT\n";
//    std::cout << pivot_index << std::endl;
    quicksort(array, length, index_left, index_right - 1);
  }
  else {
//    std::cout << "ELSE\n";
//    std::cout << pivot_index << std::endl;

    quicksort(array, length, index_left, pivot_index - 1);
    quicksort(array, length, pivot_index + 1, index_right);
  }
}