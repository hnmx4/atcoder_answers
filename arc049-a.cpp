#include <iostream>
#include <string>
using namespace std;

int main() {
  string s;
  int a, b, c, d;

  cin >> s >> a >> b >> c >> d;
  s.insert(a, "\"");
  s.insert(b+1, "\"");
  s.insert(c+2, "\"");
  s.insert(d+3, "\"");
  cout << s << endl;
  return 0;
}
