#include <iostream>
#include <vector>

using namespace std;

int main(void) {
  int n;
  cin >> n;
  vector <int> v;

  for (int i = 0; i < n; i++)
  {
    int temp;
    cin>>temp;
    if (temp > 0) {
      v.push_back(temp);
    }    
  }
  int mn = v[0];
  for (auto i : v)
  {
    if (i < mn) {
      mn = i;
    }
  }
  cout<<mn<<endl;

  return 0;
}