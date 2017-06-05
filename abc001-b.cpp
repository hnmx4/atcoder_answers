#include <iostream>
#include <iomanip>
using namespace std;

int main(void) {
  int m;
  cin >> m;
  cout << setfill('0') << setw(2) << right;
  if (m < 100) {
      cout << 0 << endl;
  } else if (m <= 5000) {
    cout << 10 * m / 1000 << endl;
  } else if (m >= 6000 && m <= 30000) {
    cout << (m/1000) + 50 << endl;
  } else if (m >= 35000 && m <= 70000) {
    cout << ((m/1000) - 30)/5 + 80 << endl;
  } else if (m > 70000) {
    cout << 89 << endl;
  }
  return 0;
}
