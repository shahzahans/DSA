/**
 * Practice Problem ~ Shadman S.
 * Topic: Functions 
 * Problem Statement: given an array of integer, write a function that returns the count of even odd number in it
 */
#include <iostream>
using namespace std;

void countEvenOdd(int a[], int n){ // Function for counting even and Odd numbers
    int evenCount = 0; // initialize the even count variable
    int oddCount = 0; // initialize the odd count variable
    for (int i = 0; i < n; i++){ // loop to search for even and odd numbers
        if (a[i]%2==0){  // if statement to check for even number
            evenCount = evenCount + 1;
        }
        else{ // else statment to check for odd number
            oddCount = oddCount + 1;
        }
    }
    cout << "The count of even number is " << evenCount << " and the count number of odd is " << oddCount << endl; // prints the odd and even number
}

int main()
{
    int a[] = {1,2,3,4,5,6,7,8,9}; // initialize the array
    
    int n = sizeof(a)/sizeof(a[0]); // find the size of the array
    
    countEvenOdd(a,n); // calling the function for countinh even and odd numbers

    return 0;
}
