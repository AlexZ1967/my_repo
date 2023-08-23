#include <iostream>
#include <vector>

using namespace std;

bool not_is_in(vector <int> &a, int el) {
  for (auto i : a)
  {
    if (el == i) {
      return false;
    }
  }
  return true;
}

int main(void) {
  int n;
  cin >> n;
  vector <int> v;

  for (int i = 0; i < n; i++)
  {
    int temp;
    cin>>temp;
    if (not_is_in(v, temp)) {
      v.push_back(temp);
    }    
  }
  
  cout<<v.size()<<endl;

  return 0;
}