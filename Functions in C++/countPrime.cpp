/**
 * Practice Problem ~ Shadman S.
 * Topic: Function: count prime numbers
 * Problem Statement: Given an array of integers, write a Function that return the count of prime numbers in it
 */
#include <iostream>
using namespace std;

int checkPrime(int num){
    if (num <= 1) return 0; // "1" and "0" is not a prime numbers
    for(int i = 2; i < num; i++){
        if (num%i == 0){
            return 0;
        }
    }
    return 1;
}
void countPrime(int a[], int n){
    int primCount = 0;
    for (int i = 0; i < n; i++){
        if(int flag = checkPrime(a[i])){
            primCount += flag;
        }
    }
    cout << "The number of prime element present in array is " << primCount << endl;
}

int main()
{
    int size;// if array is given int n = sizeof(a)/sizeof(a[0]);
    cout << "Enter the size of the array: ";
    cin >> size; 
    cout << endl;
    
    int a[size];
    cout << "Enter the element you want in your array [\" \"]: ";  
    for (int i = 0; i < size; i++){
        cin >> a[i];
    }
    countPrime(a,size);

    return 0;
}