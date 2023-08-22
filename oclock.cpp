#include <iostream>
// #include <iomanip>

int main() {
    int n;
    std::cin>>n;
    int h = (n/3600)%24;
    int m = (n/60)%60;
    int s = n%60;
    
    // std::cout<<h<<":"<<std::setw(2)<<std::setfill('0')<<m<<":"<<std::setw(2)<<std::setfill('0')<<s<<std::endl;
    std::printf("%d:%02d:%02d", h, m, s);

    return 0;
}