#include <iostream>

using namespace std;

int main(void) {
  int a, b;
  cin>>a>>b;
  
  if (a == 0 && b == 0) {
  	cout<<"INF"<<endl;
  } else if (b == 0) {
    cout<<0<<endl;
  } else if (a == 0 || b%a != 0) {
  	cout<<"NO"<<endl;
  } else {
  	cout<<-b/a<<endl;
  }
  
  return 0;
}