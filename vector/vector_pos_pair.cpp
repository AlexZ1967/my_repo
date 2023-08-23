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
    if ((v[i] > 0 && v[i - 1] > 0) || (v[i] < 0 && v[i - 1] < 0)) {      
      if (v[i - 1] < v[i]) {
        cout<<v[i - 1]<<" "<<v[i]<<endl;
      } else {
        cout<<v[i]<<" "<<v[i - 1]<<endl;
      }
      return 0;
    }
  }

  return 0;
}