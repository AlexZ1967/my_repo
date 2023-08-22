#include <iostream>
int main(){
  int h, a, b;
  std::cin>>h>>a>>b;
  std::cout<<(h - b)/(a - b) + (bool)((h - b)%(a - b))<<std::endl;  
  return 0;
}