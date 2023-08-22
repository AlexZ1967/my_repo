#include <iostream>
int main(){
  int n, m;
  std::cin>>n>>m;
  std::cout<<(n * m)/(n + m) + (bool)((n * m)%(n + m))<<std::endl;  
  return 0;
}