#include <iostream>
#include <cmath>
using namespace std;

int main() {
  int a, b, c;

  cin >> a >> b;

  c = abs(b-a);
  if (c > 5){
    c = (b+10) - a;
  }

  cout << c << endl;

  return 0;
}
