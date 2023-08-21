#include <iostream>
#include <cmath> 

using namespace std;

int main()  
	
{
    double a, b, c, d, e, f;

    cin>>a>>b>>c>>d>>e>>f;

    double det = a*d - c*b;
    
    double det_x = e*d - f*b;
    double det_y = a*f - c*e;

    if (det){
        double x = det_x/det;
        double y = det_y/det;
        cout<< 2 << " " << x << " " << y << endl;
        return 0;
    }
    if (det_x == 0 && det_y == 0 && a*b*e && c*d*f) {
        double k, n;
        if (a < c) {
            k = -a/b;
            n = e/b;
        } else {
            k = -c/d;
            n = f/d;
        }
        cout << 1 << " " << k << " " << n << endl;
        return 0;
    }
    if (det_x == 0) {
        double x0 = e/a;
        cout << 3 << " " << x0 << endl;
        return 0;
    }
    if (det_y == 0) {
        double y0 = f/c;
        cout << 4 << " " << y0 << endl;
        return 0;
    }

    cout << 5 <<endl;

    return 0;
}