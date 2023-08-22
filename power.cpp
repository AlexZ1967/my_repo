// определите только функцию power, где
//    x - число, которое нужно возвести в степень
//    p - степень, в которую нужно возвести x
//
#include <iostream>


int power(int x, unsigned p) {
    int answer = 1;
    while(p){

      answer *= x;
      p--;

    }
    return answer;
}

int main(){
  std::cout<<power(2, 1)<<std::endl;;
  return 0;
}