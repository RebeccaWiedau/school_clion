#include <iostream>
#include "quicksort/quicksort.h"
#include "tools/output.h"
int main()
  {
//    int array[] = { 10, 19, 7, 3, 5, 6, 9};
//    tools::array_output(array, 7, "Array without sorting");
//    quicksort(array, 7);
//    tools::array_output(array, 7);
    int one[] = {10, 19, 7, 3, 5, 6, 9};
    tools::array_output(one, 7, "Array without sorting");
    quicksort(one, 7, 0, 6);
    tools::array_output(one, 7, "Array with sorting");
  std::cout << std::endl;
  int two[] = {10, 7, 3, 5, 6, 9, 19};
  tools::array_output(two, 7, "Array without sorting");
  quicksort(two, 7, 0, 6);
  tools::array_output(two, 7, "Array with sorting");
  std::cout << std::endl;
  int three[] = {10, 19, 7, 5, 6, 9, 3};
  tools::array_output(three, 7, "Array without sorting");
  quicksort(three, 7, 0, 6);
  tools::array_output(three, 7, "Array with sorting");
    return 0;
  }
