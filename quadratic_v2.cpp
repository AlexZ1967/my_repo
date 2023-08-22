#include <iostream>
#include <cmath>

int main() {
  int a, b, c;
  std::cin>>a>>b>>c;

  int D = b*b - 4*a*c;

  if(D < 0) {

    std::cout<<"No real roots"<<std::endl;

  } else if(D == 0) {

    double x = -b/(2*a);
    std::cout<<x<<" "<<x<<std::endl;

  } else {

    double x1 = (-b + sqrt(D))/(2*a);
    double x2 = (-b - sqrt(D))/(2*a);
    std::cout<<x1<<" "<<x2<<std::endl;
    
  }
  return 0;
}