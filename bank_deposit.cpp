#include <iostream>
#include <cmath>
#include <iomanip>

int main(){
  double t, n, p;
  std::cin>>t>>n>>p;

  double res = n*std::pow(1 + p/100.0, t);
  std::cout<<std::fixed<<std::setprecision(2)<<res<<std::endl;

  return 0;
}