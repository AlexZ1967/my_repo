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

double powerf(double x, unsigned p) {
    double answer = 1;
    while(p){
    answer *= x;
    p--;
    }
    return answer;
}

int main(){
    int a;
    unsigned b;
    std::cin>>a>>b;
    std::cout<<power(a, b)<<std::endl;
    std::cout<<powerf(a, b)<<std::endl;
    return 0;
}