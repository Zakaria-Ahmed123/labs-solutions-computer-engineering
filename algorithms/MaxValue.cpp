#include <iostream>

class Max {
public:  

// WRITE YOUR CODE HERE
  

    int maxValue(int array[],int left, int right) {   
      if (right - left <= 1){
        return array[left] > array[right] ? array[left] : array[right];
      }else {
        int mid = left + (right - left) / 2;    
        int leftMax = maxValue(array,left,mid - 1); 
        int rightMax = maxValue(array, mid + 1, right); 
        return leftMax > rightMax ? leftMax : rightMax;
      }
    }
}; 


int main() {
    int array[] = {0, -9, 13, 4, 645, 86, -67, 230, 21, 42};
    Max mx;
    int result = mx.maxValue(array, 0, sizeof(array) / sizeof(array[0]) - 1);
    // Output the result
    std::cout << "The element with the greatest value is: " << result << std::endl;

    return 0;
}

