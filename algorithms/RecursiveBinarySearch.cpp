#include <iostream>

class BinarySearch {
public:
      // WRITE YOUR CODE HERE  
      int binarySearch(int array[], int target, int left, int right) { 
        int mid = left + (right - left) / 2; 

        if (right < left) 
          return -1; 

        if (target == array[mid])
            return mid;
        else if (target < array[mid])
            return binarySearch(array, target, left, mid - 1); 
        else 
            return binarySearch(array, target, mid + 1, right);
      }
};
int main() {
    // Sample sorted array
    int sampleArray[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    // Target value to be searched for
    int targetValue = 7;

    // Call the binary search function
    int left = 0;
    int right = sizeof(sampleArray) / sizeof(sampleArray[0]) - 1;
    BinarySearch bs;
    int result = bs.binarySearch(sampleArray, targetValue, left, right);

    // Output the result
    if (result == -1) {
        std::cout << "Element not present in the array." << std::endl;
    } else {
        std::cout << "Element found at index: " << result << std::endl;
    }

    return 0;
}

