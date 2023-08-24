#include <iostream>
#include <vector>

using namespace std;

int main(void) {

  //input
  int n;
  cin >> n;
  vector <int> v;
  for (int i = 0; i < n; i++)
  {
    int temp;
    cin>>temp;
    v.push_back(temp);
  }

  //out with shift 1 mod n
  for (int i = 0; i < n; i++)
  {
    cout<<v[(n - 1 + i)%n]<<" ";
  }  
    
  return 0;
}