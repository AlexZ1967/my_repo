#include <iostream>
#include <vector>

using namespace std;

bool is_beats(int x1, int y1, int x2, int y2) {
  if (x1 == x2 || y1 == y2 || abs(x2 - x1) == abs(y2 - y1)) {
  	return true;
  }
  return false;
}

int main(void) {
  
  vector <int> x(8);
  vector <int> y(8);
  for (int i = 0; i < 8; i++)
  {
    cin>>x[i]>>y[i];
  }

  for (int j = 0; j < 7; j++) {
    for (int i = j + 1; i < 8; i++)
    {
      if (is_beats(x[j], y[j], x[i], y[i])) {
        cout<<"YES"<<endl;
        return 0;
      }
    }
    
  }
  cout<<"NO"<<endl;  
  
  return 0;
}