#include <iostream>
#include <string>
using namespace std;

int main() {
  string s;
  int n, a, b, c, d;

  cin >> a >> b;
  c = b/a;
  if (b%a > 0) {
    cout << c + 1 << endl;
  } else {
    cout << c << endl;
  }
  return 0;
}
