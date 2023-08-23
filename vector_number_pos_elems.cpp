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

  //calc number positive elements
  int count = 0;
  for (auto i : v)
  {
    if (i > 0) {
      count++;
    }  
  }
  
  cout << count;

  return 0;
}