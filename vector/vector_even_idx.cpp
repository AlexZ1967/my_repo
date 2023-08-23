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

  //output even values
  for (int i = 0; i < n; i += 2)
  {    
    cout << v[i] << " ";
  }  
  return 0;
}