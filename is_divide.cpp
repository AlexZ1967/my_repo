#include <iostream>
int main(){
  int a, b;
  std::cin>>a>>b;
  std::cout<<1 + (a % b)*(b % a)<<std::endl;  
  return 0;
}