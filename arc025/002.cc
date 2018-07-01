#include <iostream>
#include <string.h>
using namespace std;

int main()
{
  int n, f[10], mu=0;
  cin >> n;
  for (int i=0;i<n;i++)
    cin >> f[i];

  for (int i=0;i<n;i++){
    while (f[i]%2==0 || f[i]==5){
      mu++;
      f[i]--;
    }
  }
  cout << mu <<endl;
  return 0;
}

