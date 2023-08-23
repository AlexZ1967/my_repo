#include <iostream>

using namespace std;

int main(void) {
  int A, B, C, D;
  cin >> A >> B >> C >> D;
  
  double S = (A*5 + B*4 + C*3 + D*2)/(A + B + C + D);
  int all = 0;
  
  if (S < 5.0) {
  	all += A;
  	if (S < 4.0) {
      all += B;
      if (S < 3.0) {
      	all += C;
      }      	
    }  
  }      
  cout<<all<<endl;
  
  return 0;
}