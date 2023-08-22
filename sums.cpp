#include <iostream>

int main(){
  unsigned T = 0;
  int a = 0;
  int b = 0;

  std::cin>>T;

  while (T)
  {
    std::cin>>a>>b;
    std::cout<<(a + b)<<std::endl;
    --T;
  }  

  return 0;
}