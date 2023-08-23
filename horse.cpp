#include <iostream>

using namespace std;

int main(void) {
  int x1, y1, x2, y2;
  cin>>x1>>y1>>x2>>y2;
  
  if ((abs(x2 - x1) == 1 && abs(y2 - y1) == 2) || (abs(x2 - x1) == 2 && abs(y2 - y1) == 1)) {
  	cout<<"YES"<<endl;
  } else {
    cout<<"NO"<<endl;
  }
  
  return 0;
}