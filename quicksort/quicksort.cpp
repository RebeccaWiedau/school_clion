#include "quicksort.h"
#include <iostream>
#include "../tools/output.h"




void quicksort(int array[], int length, int index_left, int index_right) {

  if (index_left + 1 == index_right || index_right <= 0) return;
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
          tools::array_output(array, 7, "End");
          pivot_swaped = true;
          pivot_index = i;
          break;
        }

          if (j >= 0 && array[j] < pivot) {
            int temp = array[j];
            array[j] = array[i];
            array[i] = temp;
            tools::array_output(array, 7, "Swap");
            break;
        }
      }
    }
  }

  std::cout << "YOLO\n";
}





//void quicksort(int array[], int length) {
//  int index_left = 0;
//  int index_right = length -1;
//  int pivot = array[index_right];
//
//  for (int j = index_right - 1; j > 0; j--) {
//    if (array[j] < pivot) {
//      for (int i = index_left; i < index_right - 1; i++) {
//        if (j < i) {
//          array[index_right] = array[i];
//          array[i] = pivot;
//          std::cout << "right before Quicksort_rekursiv" << std::endl;
//          tools::array_output(array,7);
////          int half = index_right/2;
////          quicksort(array, index_left, half -1, false);
////          quicksort(array, half, index_right, false);
//          return;
//        }
//        if (array[i] >=  pivot) {
//          int temp = array[j];
//          array[j] = array[i];
//          array[i] = temp;
//          break;
//        }
//      }
//    }
//  }
//}
//
//void quicksort(int array[], int index_left, int index_right, bool breaking) {
//  int pivot = array[index_right];
//  std::cout << "Quicksort_rekursiv start" << std::endl;
//  tools::array_output(array,7);
//  std::cout << "Pivot " << pivot << std::endl;
//  std::cout << "Left " << index_left << std::endl;
//  std::cout << "Right " << index_right << std::endl;
//
//
//  for (int j = index_right - 1; j > 0; j--) {
//    if (array[j] < pivot) {
//      for (int i = index_left; i < index_right - 1; i++) {
//        if (j <= i) {
//          array[index_right] = array[i];
//          array[i] = pivot;
//          int half = index_right/2;
//          std::cout << "half " << half << std::endl;
//
//          if (half > 3) {
//                      if (breaking) return;
//                      quicksort(array, index_left, half, false);
//                      quicksort(array, half - 1, index_right, true);
//          }
//          return;
//        }
//        if (array[i] >= pivot) {
//          int temp = array[j];
//          array[j] = array[i];
//          array[i] = temp;
//          break;
//        }
//      }
//    }
//  }
//  std::cout << "Quicksort_rekursiv end" << std::endl;
//  tools::array_output(array,7);
//}