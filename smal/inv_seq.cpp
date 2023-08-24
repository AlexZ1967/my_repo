//
// Created by alex on 24.08.2023.
//

#include <iostream>

void invert_seq(void) {
    int n;
    std::cin>>n;
    if(n != 0) {
        invert_seq();
        std::cout<<n<<" ";
    }
}

int main() {
    invert_seq();
}
