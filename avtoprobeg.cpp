#include <iostream>

int main() {
    int n, m;
    std::cin>>n>>m;
    int res = m / n + (bool)(m % n);
    
    std::cout<<res<<std::endl;

    return 0;
}