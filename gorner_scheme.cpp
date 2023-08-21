#include <iostream>  

using namespace std;
	
int main()  
	
{
    int n;
    double x, c;
    double gorner;
    cin >> n;
    cin >> x;
    cin >> gorner;    
    for (size_t i = 0; i < n; i++)
    {
        cin>>c;
        gorner = gorner*x + c; 
    }

    cout<<gorner<<endl;

}