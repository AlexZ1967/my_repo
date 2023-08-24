//
// Created by alex on 24.08.2023.
//

#include <iostream>

unsigned gcd(unsigned a, unsigned b) {
    if(b == 0) {
        return a;
    }
    if (a < b) {
        unsigned temp = a;
        a = b;
        b = temp;
    }
    return gcd(b, a % b);
}

int main() {

    unsigned a, b;
    std::cin>>a>>b;

    std::cout<<gcd(a, b)<<std::endl;
}
