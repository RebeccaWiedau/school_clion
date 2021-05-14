#include "quicksort.h"
#include "../tools/output.h"
#include <iostream>

namespace sort::quicksort {
  void quicksort(int array[], int length, int index_left, int index_right, bool is_sorted)
  {

    if (index_left >= index_right || is_sorted) return;
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

    bool is_pivot_left = pivot_index == index_left;
    bool is_pivot_right = pivot_index == index_right;

    quicksort(array, length, index_left, pivot_index - 1, is_pivot_left);
    quicksort(array, length, pivot_index + 1, index_right, is_pivot_right);
  }
}