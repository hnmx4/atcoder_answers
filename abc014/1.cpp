#include <iostream>
#include <stdio.h>
#include <stdlib.h>  /* random, srandom */
#include <string.h>
using namespace std;

int main()
{
  int n, q;
  int *x, *y, *xq, *yq, *ans;

  x = (int *)malloc(sizeof(int)*100000);
  y = (int *)malloc(sizeof(int)*100000);
  xq = (int *)malloc(sizeof(int)*100000);
  yq = (int *)malloc(sizeof(int)*100000);
  ans = (int *)malloc(sizeof(int)*100000);

  cin >> n;

  for(int i=0;i<n;i++)
    cin >> x[i] >> y[i];

  cin >> q;

  for(int i=0;i<q;i++)
    cin >> xq[i] >> yq[1];



  cout << ans << endl;
  return 0;
}
