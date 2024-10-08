/**
 * Practice Problem ~ Shadman S.
 * Topic: Recursion - Power of Two
 * ~ Power of Two
 * Problem Statement: Given an integer n, return true if it is a power of two. Otherwise, return false.
 */

#include <iostream>
using namespace std;

bool isPowerOfTwo(int n) { // Function to see if the number is divisible by 2
        if (n == 1){ // 1 is power of two because square root of 1 is 1 and not decimal number
            return true;
        }
        else if(n%2 !=0 || n <= 0){ // if a number is not divisible by 2 then false, n is equal to 0 and less than 0  returns falls too
            return false;
        }
        return isPowerOfTwo(n/2); // recursion function is being called

}

int main()
{
   int n; // declaring a number 
   cout << "Enter a Number: ";
   cin >> n; // inputting a number
   isPowerOfTwo(n); // calling the function
   
   if(n == 1){
       cout << "True";
   }
   else{
       cout << "False";
   }

    return 0;
}
