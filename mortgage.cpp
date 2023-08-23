#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main(){
  unsigned long r;
  unsigned long m;
  double p;
  std::cin>>r>>p>>m;
  
  double lrate = p/12.0;
  cout<<lrate<<endl;
  lrate /= 100; 
  long double month_pay = r*(lrate + lrate/(pow(1 + lrate, m) - 1));
  cout<<month_pay<<endl;
  long double pereplata = month_pay*m - r;
  std::cout<<fixed<<setprecision(2)<<pereplata<<std::endl;

  return 0;
}