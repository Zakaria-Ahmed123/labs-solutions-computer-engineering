#include <iostream>
// WRITE YOUR CODE HERE
using namespace std; 
class LinearSearch { 
  public: 
    int linearSearch(int array[], int size , int target){
      for (int i = 0 ; i < size ; i++){
        if (array[i] == target){
          return i; 
        }
      }
      return -1; 
    }
}; 

int main() { 
  int array[] =  {1,2,3,4,5}; 
  int size = sizeof(array)/sizeof(array[0]);
  int target = 2; 
  
  LinearSearch ls;
  int result = ls.linearSearch(array, size, target);
  
  if (result == -1){ 
     cout << "target not found" << endl; 
  }else { 
    cout << "target:"<< target << ",found at index:" << result << endl;
  }

  return 0; 
}
