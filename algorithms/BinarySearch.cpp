#include <iostream>

using namespace std;

int main()
{
    int A[25] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97};
    int target = 61, mid, lower = 0, upper = (sizeof(A) / sizeof(int))-1;

    while(lower <= upper){
        mid = (lower+upper)/2;

        if(A[mid] == target){
            cout << "The value is found.\nThe index is: " << mid <<", value is: "  << A[mid] << endl;
            break;
        } else if(A[mid] < target){
            lower = mid+1;
        } else{
            upper = mid-1;
        }
    }

    if(lower > upper){
        cout << "The value is not found." << endl;
    }

    return 0;
}
