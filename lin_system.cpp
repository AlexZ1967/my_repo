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

    double x = det_x/det;
    double y = det_y/det;
    cout << x << " " << y << endl;
    return 0;
}