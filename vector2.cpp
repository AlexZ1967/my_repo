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

  for (int i = 1; i < n; i++)
  {
    if (v[i] > v[i - 1]) {
      cout << v[i] << " ";
    }
  }
  

  return 0;
}