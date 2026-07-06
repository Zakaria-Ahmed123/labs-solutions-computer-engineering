#include <iostream>
// WRITE YOUR CODE HERE
using namespace std; 
int main () { 
  int first_array[] = {1,2,3,4,5}; 
  int second_array[] = {6,7,8,9,10}; 
  
  int first_size = sizeof(first_array)/ sizeof(first_array[0]); 
  int second_size = sizeof(second_array)/ sizeof(second_array[0]); 
  int final_size = first_size + second_size; 

  int final_array[final_size];
  for (int i = 0 ; i < first_size ; i++){
    final_array[i] = first_array[i];
  }
  
  for (int i = 0 ; i < second_size ; i++) {
    final_array[i + first_size] = second_array[i];
  }
  
  cout << "final merged array: " << endl; 
  for (int i = 0 ; i < final_size ; i++) {
    cout << final_array[i] << endl; 
  }

  return 0; 
}
