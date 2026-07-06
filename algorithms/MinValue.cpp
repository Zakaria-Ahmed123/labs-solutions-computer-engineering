#include <iostream>

class Min{
public:  

// WRITE YOUR CODE HERE
  int minValue(int array[], int left, int right) {
    if (right - left <= 1){
      return array[left] < array[right] ? array[left] : array[right]; 
    }else{ 
      int mid = left + (right - left) / 2; 
      int leftMin = minValue(array,left,mid -1);
      int rightMin = minValue(array,mid + 1,right);
      return leftMin < rightMin ? leftMin : rightMin; 
    }
  }
}; 


int main() {
    int array[] = {0, -9, 13, 4, 645, 86, -67, 230, 21, 42};
    Min mn;
    int result = mn.minValue(array, 0, sizeof(array) / sizeof(array[0]) - 1);
    // Output the result
    std::cout << "The element with the smallest value is: " << result << std::endl;

    return 0;
}

