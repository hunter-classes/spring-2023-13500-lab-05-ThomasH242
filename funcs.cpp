
#include <iostream>
#include "funcs.h"

// add functions here
bool isDivisibleBy(int n, int d){
    return n % d == 0;
}

bool isPrime(int n){
    int c = 0;
    for(int i = 1;i<=n;i++){
        if(n%i==0){
            c++;
        }
        if(c > 2){
            return false;
        }
    }
    if(c != 2){
        return false;
    }
    return true;

}   

int nextPrime(int n){
    int i = n;
    while(true){
        i++;
        if(isPrime(i) == true){
            return i;
        }
    }
}

int countPrimes(int a, int b){
    int c = 0;
    for(int i = a;i<= b;i++){
        if(isPrime(i)){
            c++;
        }
    }
    return c;
}

bool isTwinPrime(int n){
    if (isPrime(n+2) && isPrime(n) || isPrime(n-2) && isPrime(n)){
        return true;
    }
}

int nextTwinPrime(int n){
    int i = n;
    while(true){
        i+=2;
        if(isPrime(i)){
            return i;
        }
    }
}

int largestTwinPrime(int a, int b){
    int large = -1;
    for(int i = a;i <= b;i++){
        if(isTwinPrime(i)){
            large = i;
        }
    }
    return large;
}