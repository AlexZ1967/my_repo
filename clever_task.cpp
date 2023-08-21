#include <iostream>  

using namespace std;
	
int main()  
	
{
    int n;
    cin >> n;

    unsigned char b = n % 2;
    cout << !b << endl;

    int delta = 20 * (n / 2) + 5 * (n % 2) + 45*3 - (n % 2) * 5 - (~b)*15;

    cout << delta<< endl;

    cout << 9 + delta/60 << "  " << delta % 60 << endl;

}