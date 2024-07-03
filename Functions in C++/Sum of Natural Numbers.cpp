/**
 * Practice Problem ~ Shadman S.
 * Topic: Function: sum of the first n natural number
 * Problem Statement: Given an n integer n, write a function that returns the sum of all the natural numbers from 1 to n (both included)
 */
#include <iostream>
using namespace std;

int printSum(int n){
   int sum = 0;
   
   for (int i = 1; i <= n; i++){
       if (i == n ){
           cout << i << ") = ";
       }
       else{
           cout << i << " + ";
       }
   }
   for (int i =0; i <= n; i++){
       sum = sum + i;
   }
   return sum;
}

int main()
{
    int n = 5;
    
    cout << "Sum of all nautral number of " << n << " is (";
    cout << printSum(n);

    return 0;
}