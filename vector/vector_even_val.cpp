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

  //output even indexes
  for (auto i : v)
  {
    if (i % 2 == 0) {
      cout << i << " ";
    }  
  }
  
  return 0;
}