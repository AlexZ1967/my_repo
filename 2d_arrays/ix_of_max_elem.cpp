#include <iostream>
#include <vector>

using namespace std;

int main() {

    int n, m;
    cin>>n>>m;
    int mi, mj;
    int cur, max; 
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            
            cin>>cur;
            if (i == 0 && j == 0) {
                max = cur;
                mi = 0;
                mj = 0;
            } else if (cur > max) {
                mi = i;
                mj = j;
                max = cur;
            }           
        }        
    }
    cout<<mi<<" "<<mj<<endl;    

    return 0;
}
