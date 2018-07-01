#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

int main() {
  int n, mc=0;
  vector<int> x(1000), y(1000), c(1000), vmax;
  double ans;
  double tmp=0, sumc=0;

  cin >> n;
  int tx, ty, tc;
  for (int i=0; i<n; i++) {
    cin >> tx >> ty >> tc;
    // x.push_back(tx);
    // y.push_back(ty);
    // c.push_back(tc);
    mc = max(mc, tc);
    sumc += tc;
    vmax.push_back(max(tx, ty));
  }

  sort(vmax.begin(), vmax.end());
  double minl = (vmax.at(vmax.size()-1) - vmax.at(0));
  cout << minl / 2 << endl;
  return 0;
}
