#include <iostream>
#include <vector>

using namespace std;

int main(void) {

  //input
  int n;
  cin >> n;
  vector <int> v;
  int total_pairs = 0;

  for (int i = 0; i < n; i++)
  {
    int temp;
    cin>>temp;
    v.push_back(temp);
  }

  //calc total pairs
  for (int i = 0; i < n - 1; i++)
  {
    for (int j = i + 1; j < n; j++)
    {
      if (v[i] == v[j]) {
        total_pairs++;
      }
    }    
  }  
  cout<<total_pairs<<endl;  
  return 0;
}