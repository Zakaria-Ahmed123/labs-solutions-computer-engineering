#include <iostream>
// WRITE YOUR CODE HERE
using namespace std; 
int main() { 
  int array[] = {1,2,3,4,5}; 
  int deletion_index = 2; 
  int array_size  = sizeof(array)/sizeof(array[0]); 
  
  cout << "original array" << endl; 
  for (auto index : array){ 
    cout << index << endl; 
  }

  int new_array_size = sizeof(array)/sizeof(array[0]) - 1; 
  int new_array[new_array_size]; 

  for (int i = 0 ; i < deletion_index ; i++ ){
    new_array[i] = array[i];
  }

  for (int i = deletion_index ; i < new_array_size ; i++) {
    new_array[i] = array[i+1];
  }

  cout << "array after deletion" << endl; 
  for (auto  index : new_array){ 
    cout << index << endl; 
  }

  return 0; 
}
