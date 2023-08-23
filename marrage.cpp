#include <iostream>

using namespace std;

int main(void) {
  int N, R, F, S;
  cin >> N >> R >> F >> S;
  
  int dR = R - N;
  int dF = F - N;
  int dS = S - N;
  
  int mn = dR;  
  char ch = 'R';
  
  if (dF < mn) {
    mn = dF;
  	ch = 'F';
  }
  
  if (dS < mn) {
  	ch = 'S';
  }
  
  cout<<ch<<endl;
  
  return 0;
}