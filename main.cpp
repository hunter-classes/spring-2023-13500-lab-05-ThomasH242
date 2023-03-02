#include <iostream>

//Thomas Huang, ThomasH242
#include "funcs.h"

int main(){
  std::cout << "Prime: " << "\n";
  for(int i = 0; i <= 100;i++){
    if(isPrime(i)){
        std::cout << i << " ";
      }
  }
  std::cout << "\n";
  std::cout << "TwinPrime: " << "\n";
  for(int j = 0; j <= 100;j++){
    if(isTwinPrime(j)){
        std::cout << j << " ";
      }
  }
  std::cout << "\n";
  return 0;
}
