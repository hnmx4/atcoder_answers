#include <iostream>
#include <iomanip>
using namespace std;

int main() {
  int n, a[98], i, sum=0;
  double ave=0;

  cin >> n;
  for(i=0;i<n;i++){
    cin >> a[i];
  }

  for(i=1;i<n;i++){
    sum += a[i]-a[i-1];
  }

  ave = (double)(sum/double(n-1));

  cout << fixed << setprecision(5) << ave << endl;

  return 0;
}
