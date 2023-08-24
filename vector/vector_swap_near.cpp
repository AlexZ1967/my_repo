#include <iostream>
#include <vector>

using namespace std;

void swap(int &a, int &b) {
  int temp = a;
  a = b;
  b = temp;
}

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

  //swap near elems
  for (int i = 0; i < n; i += 2)
  {
    if (i < n - 1) {
      swap(v[i], v[i+1]);
    }    
  }

  //out
  for (auto &&i : v)
  {
    cout<<i<<" ";
  }
    
  return 0;
}