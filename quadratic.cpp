#include <iostream>
#include <cmath> 

using namespace std;

int main()  
	
{
    double a, b, c, d;
    cin>>a>>b>>c;
    
    if (a == b && b == c && a == 0) {
        cout<< 3 << endl;
        return 0;
    }
    if (a == 0 && b == 0) {
        cout<< 0 << endl;
        return 0;
    }
    if ((a == 0 && c == 0) || (b == 0 && c == 0)) {
        cout<< 1 << " " << 0 << endl;
        return 0;
    }
    
    if (a == 0) {
        cout<< 1 << " " << -c/b << endl;
        return 0;
    }

    d = b*b - 4*a*c;
    
    if (d == 0) {
        cout<< 1 << " " << -b/(2*a);
        return 0;
    }
    if (d > 0) {
        double res1 = (-b - sqrt(d))/(2 * a);
        double res2 = (-b + sqrt(d))/(2 * a);
        if (res2 < res1) {
            double swap = res1;
            res1 = res2;
            res2 = swap;
        }
        cout<< 2 << " " << res1 << " " << res2 <<endl;
        return 0;
    }
    cout<< 0 << endl;
    return 0;
}