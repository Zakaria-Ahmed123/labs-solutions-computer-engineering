#include <iostream>

class InsertionSort {
public:
// WRITE YOUR CODE HERE
  void sort(int A[], int size) { 
    for (int i = 1; i < size ; i++){
      int key = A[i]; 
      int j = i - 1;

      while (j >= 0 && A[j] > key){
        A[j+1] = A[j]; 
        j = j - 1;
      } 

      A[j+1] = key;
    }
  } 
};

int main() {
    int array[] = {6, 5, 3, 1, 8, 7, 2, 4};
    int n = sizeof(array) / sizeof(array[0]);

    InsertionSort sorter;
    sorter.sort(array, n);

    std::cout << "Sorted array = {";
    for (int i = 0; i < n; i++) {
        std::cout << array[i];
        if (i < n - 1) {
            std::cout << ", ";
        }
    }
    std::cout << "}" << std::endl;

    return 0;
}

