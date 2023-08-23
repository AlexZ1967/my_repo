// определите только функцию power, где
//    x - число, которое нужно возвести в степень
//    p - степень, в которую нужно возвести x
//
#include <iostream>
using namespace std;

int power(int x, unsigned p) {
    int answer = 1;
    while(p){

      answer *= x;
      p--;

    }
    return answer;
}

int main(){
  int a, b;
  cout<<"Введите число которое будете возводить в степень: ";
  cin>>a;
  cout<<"Введите степень d в котрорую будете возводить: ";
  cin>>b;
  printf("%d^%d = ", a, b);
  cout<<power(a, b)<<endl;;
  return 0;
}