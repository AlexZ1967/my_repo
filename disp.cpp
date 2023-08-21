#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main(void) {

  int s1 = 0, s2 = 0, x, n = 0;
  double res;
  while (cin>>x && x){
    ++n;
    s1 += x;
    s2 += x*x; 
  }
  res = sqrt(((double)s2 - ((double)(s1 * s1))/n)/(n-1));
  
  cout<<fixed<<setprecision(11)<<res<<endl;
  return 0;
}
