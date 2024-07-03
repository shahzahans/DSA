/**
 * Practice Problem ~ Shadman S.
 * Topic: Function: sum of the first n natural number
 * Problem Statement: Given an n integer n, write a function that returns the sum of all the natural numbers from 1 to n (both included)
 */
#include <iostream>
using namespace std;

int printSum(int n){ // Function to print the sum of all the natural numbers
   int sum = 0; // initialize sum variable for ith number and to add the next number
   
   for (int i = 1; i <= n; i++){ //loop to print numbers to nth number 
       if (i == n ){
           cout << i << ") = ";
       }
       else{
           cout << i << " + ";
       }
   }
   for (int i =0; i <= n; i++){ // loop to add the element numbers to nth 
       sum = sum + i;
   }
   return sum;
}

int main()
{
    int n = 5; // intialize the n
    
    cout << "Sum of all nautral number of " << n << " is (";
    cout << printSum(n); // calling the function

    return 0;
}
