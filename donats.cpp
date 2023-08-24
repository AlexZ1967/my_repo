#include <iostream>

int main(){
  int p, m, n;
  std::cin>>p>>m>>n;

  int total = 0;

  total = (n / p)*2*m + ((bool)(n % p))*2*m;
    
  std::cout << total << std::endl;
  return 0;
}