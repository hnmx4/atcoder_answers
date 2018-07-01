#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;

typedef struct _island {
  bool painted;
  bool searched;
  vector< _island* > access;
} island;

int main() {
  int n, a, b;
  vector<island> ild;
  island tild;

  cin >> n;
  tild.painted = false;
  tild.searched = false;
  for (int i=0; i<n; i++) {
    ild.push_back(tild);
  }
  for (int i=0; i<n; i++) {
    cin >> a >> b;
    ild.at(a).access.push_back(&ild.at(b));
    ild.at(b).access.push_back(&ild.at(a));
  }

  return 0;
}
