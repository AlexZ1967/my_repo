#define _USE_MATH_DEFINES
#include <iostream>
#include <iomanip>
#include <cmath>

int main(){

  double S;
  std::cin>>S;
  double P = sqrt(S*4*M_PI);
  std::cout<<std::fixed<<std::setprecision(15)<<P<<std::endl;
  return 0;

}