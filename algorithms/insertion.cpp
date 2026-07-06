#include <iostream>
// WRITE YOUR CODE HERE
using namespace std;
int main() { 
  int array [] = {1,2,3,4,5}; 
  int insertion_index = 2; 
  int insertion_value = 10; 
 
  int new_array_size = sizeof(array)/sizeof(array[0]) + 1; 
  int new_array[new_array_size]; 
  cout << "array before insertion:" << endl;
  for (int i = 0 ; i < sizeof(array)/sizeof(array[0]); i++){
    cout << array[i] << endl; 
  } 
  
  for (int i = 0 ; i < insertion_index ; i++){ 
    new_array[i] = array[i]; 
  }
  
  new_array[insertion_index] = insertion_value; 
  for (int i = insertion_index + 1 ; i < new_array_size ; i++){ 
    new_array[i] = array[i-1]; 
  }

  cout << "array after insertion : " << endl; 
  for (int i = 0 ; i < new_array_size ; i++) {
    cout << new_array[i] << endl; 
  }

}
