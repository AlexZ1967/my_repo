#include <iostream>
using namespace std;
int main(){
  unsigned int a, x1, y1, w, h;
  std::cin>>a>>x1>>y1>>w>>h;
  
  unsigned int x1_a = x1/a;
  unsigned int y1_a = y1/a;
  unsigned int x2_a = (x1 + w)/a;
  unsigned int y2_a = (y1 + h)/a;
  // cout<<x1_a<<" "<<y1_a<<"      "<<x2_a<<" "<<y2_a<<endl;
  unsigned int res = (x2_a - x1_a + (bool)((x1 + w) % a))*(y2_a - y1_a + (bool)((y1 + h) % a));

  std::cout<<res<<std::endl;  
  return 0;
}