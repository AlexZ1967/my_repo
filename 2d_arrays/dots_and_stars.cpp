#include <iostream>
using namespace std;

int main() {

    int n;
    cin>>n;
    char ar[15][15];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if(j == n/2 || i == n/2 || j == i || j == n - i - 1) {
                ar[i][j] = '*';
            } else {
                ar[i][j] = '.';
            }
        }        
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
           cout<<ar[i][j]<<" ";                      
        }
        cout<<endl;        
    }        

    return 0;
}
