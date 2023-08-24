#include <iostream>

int main(){
  int n;
  std::cin>>n;
  int a = 0, b = 0, c = 0;

  c = n / 60;
  n %= 60;
  if (n > 34) {
    c++;
  } else {
    b = n / 10;
    n %= 10;
    if (n > 8) {
      b++;
    } else {
      a = n;
    }
  }
  
  std::cout << a << " " << b << " " << c << std::endl;
  return 0;
}