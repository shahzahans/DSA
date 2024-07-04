/**
 * Practice Problem ~ Shadman S.
 * Topic: Function: count prime numbers
 * Problem Statement: Given an array of integers, write a Function that return the count of prime numbers in it
 */
#include <iostream>
#include <vector>
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
void countPrime(const vector<int>& a){
    int primCount = 0;
    for (int num : a){
        if(checkPrime(num)){
            primCount ++;
        }
    }
    cout << "The number of prime element present in array is " << primCount << endl;
}

int main()
{
    int size;
    cout << "Enter the size of the Array: ";
    cin >> size;
    
    vector<int> a(size);
    
    cout << "Enter the inegers in Array: ";
    for(int i = 0; i < 5; i++){
        cin >> a[i];
    }
    countPrime(a);

    return 0;
}