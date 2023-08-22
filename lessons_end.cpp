#include <iostream>

int main() {
    int n;
    std::cin>>n;

    int delta = (45*n + 20*(n - 1)/2)*(n % 2) + (n*45 +5 + 20*(n-2)/2)*(1 - (n % 2));
    int h = 9 + delta/60;
    int m = delta%60; 
    std::cout<<h<<" "<<m<<std::endl;;

    return 0;
}