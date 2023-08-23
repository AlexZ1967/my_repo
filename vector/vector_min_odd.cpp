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
    if (temp%2) {
      v.push_back(temp);
    }    
  }

  if (v.size() == 0) {
    cout<<0<<endl;
    return 0;
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