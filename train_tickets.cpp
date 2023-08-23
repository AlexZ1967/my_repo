#include <iostream>

using namespace std;

int main(void) {
  int n;
  cin>>n;

  int n3 = 0;
  int n2 = 0;

  if(n >= 60) {
    n3 = n/60;
    n %= 60;
  }
  if(n >= 10) {
    n2 = n/10;
    n %= 10;
  }
  cout<<n*15 + n2*125 + n3*440;
 
  return 0;
}