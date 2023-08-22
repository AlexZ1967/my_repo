#include <iostream>
#include <iomanip>
#include <cmath>

int main(){

  double a, b;
  std::cin>>a>>b;

  double a_ar = (a + b)/2;
  double a_geo = sqrt(a * b);
  double a_garm = 2.0 * a * b / (a + b);
  double a_sq = sqrt((a * a + b * b)/2);

  std::cout<<std::setprecision(16);
  std::cout<<a_ar<<std::endl;
  std::cout<<a_geo<<std::endl;
  std::cout<<a_garm<<std::endl;
  std::cout<<a_sq<<std::endl;

  return 0;

}