#include <iostream>
using namespace std;
int main(){
  unsigned long long n;
  std::cin>>n;
  
  unsigned long long m = n/10;

  cout<<m<<endl;

 unsigned long long  res = m*(m+1)*100;
  cout<<res<<endl;

  std::cout<<res + 25<<std::endl; 
  
  return 0;

}