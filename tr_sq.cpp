#include <iostream>
#include <iomanip>
#include <cmath>

int main(){

  double a, b;
  std::cin>>a>>b;
  double sq = a * b / 2;
  std::cout<<std::fixed<<std::setprecision(3)<<sq<<std::endl;
  return 0;

}