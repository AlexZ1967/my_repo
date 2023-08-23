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

  //sorting
  for (int i = 0; i < n; i++)
  {
    int v_min_num = i;
    for (int j = i; j < n; j++)
    {      
      if (v[j] < v[v_min_num]) {
        v_min_num = j;  
      }
    }
    int temp = v[i];
    v[i] = v[v_min_num];
    v[v_min_num] = temp;   
  }

  //output
  for (auto a : v)
  {
    cout << a << " ";
  }  
  return 0;
}