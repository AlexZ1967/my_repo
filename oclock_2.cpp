#include <iostream>

int main() {
    int n;
    std::cin>>n;
    int h = n/3600;
    int m = (n/60)%60;
    
    std::printf("It is %d hours %d minutes.", h, m);

    return 0;
}