#include <iostream>
#include <string>
#include <vector>
#include <map>
using namespace std;

int main() {
  vector<int> a, ac, b;
  int n, tmp, lv=0;
  map<int, int> mp;

  cin >> n;
  for (int i=0; i<n; i++) {
    cin >> tmp;
    a.push_back(tmp);
    ac.push_back(tmp);
  }


  sort(ac.begin(), ac.end());
  tmp = ac.at(0);
  for (int i=0; i<ac.size(); i++) {
    if (ac.at(i) > tmp) {
      lv++;
    }
    mp[ac.at(i)] = ac.at(i) - lv;
    tmp = ac.at(i);
  }

  for (int i=0; i<a.size(); i++) {
    a.at(i) -= mp[a.at(i)];
  }

  for (auto itr = a.begin(); itr != a.end(); ++itr) {
    cout << *itr << endl;
  }
  return 0;
}
