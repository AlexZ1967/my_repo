#include <iostream>
#include <vector>

using namespace std;

int cnt(vector <int> &a, int b) {
  int total = 0;
  for (auto &&i : a) {
    if (i == b) {
      total++;
    }
  }  
  return total;
}

int main(void) {

  //input only unical
  int n;
  cin >> n;
  vector <int> v;
  int total_pairs = 0;

  for (int i = 0; i < n; i++) {
    int temp;
    cin>>temp;
    v.push_back(temp);        
  }

  //out
  for (auto &&i : v) {
    if (cnt(v, i) == 1) {
      cout<<i<<" ";
    }    
  }
  return 0;
}