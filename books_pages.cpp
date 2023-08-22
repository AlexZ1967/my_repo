#include <iostream>

int main() {
    int k, n;
    std::cin>>k>>n;

    std::cout<<(n/k + 1) - (1 - (bool)(n % k))<<" "<<k*(1 - (bool)(n % k)) + (n % k)<<std::endl;
    
    return 0;
}