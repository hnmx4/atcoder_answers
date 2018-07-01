#include <iostream>
using namespace std;

int main() {
  char a[5]={'A', 'B', 'C', 'D', 'E'}, in;
  int ans=0;
  cin >> in;
  for(int i=0;i<5;i++){
    if(in == a[i]){
      ans=i;
      break;
    }
  }

  cout << ans+1 << endl;

  return 0;
}
