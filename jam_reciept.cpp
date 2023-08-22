#include <iostream>

int main(){

  int n;
  std::cin>>n;

  int s = 2 * n;
  int c = 3 * n;

  printf("water - %d kg\n", n);
  printf("cherry - %d kg\n", c);
  printf("sugar - %d kg\n", s);
  printf("jam - %ld kg\n", n + c + s);
  return 0;

}