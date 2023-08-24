#include <iostream>
#include <vector>

using namespace std;

bool is_in(int a, int beg, int end) {
  if (beg <= a && a <= end) {
  	return true;
  }
  return false;
}

int main(void) {
  //input
  int n, k;
  cin>>n>>k;
  vector <int> b(k);
  vector <int> e(k);
  
  for (int i = 0; i < k; i++)
  {
    cin>>b[i]>>e[i];
  }

  //output
  bool beat_flag = false;
  for (int j = 1; j < n + 1; j++) {
    for (int i = 0; i < k; i++)
    {
      if (is_in(j, b[i], e[i])) {
        cout<<".";
        beat_flag = true;
        break;
      }
    }
    if(!beat_flag) {
      cout<<'I';
    }
    beat_flag = false;    
  }
  cout<<endl;  
  
  return 0;
}