#include <iostream>
#include <stdio.h>
#include <stdlib.h>  /* random, srandom */
#include <string.h>
using namespace std;

int compare(const void *a, const void *b)
{
    return *(int*)a - *(int*)b;
}

int main()
{
  int n, ans;
  int *data, *aary, *bary;

  data = (int *)malloc(sizeof(int)*1000001);
  aary = (int *)malloc(sizeof(int)*100000);
  bary = (int *)malloc(sizeof(int)*100000);

  for(int i=0;i<1000000;i++)
    data[i]=0;

  cin >> n;

  for(int i=0;i<n;i++)
    cin >> aary[i] >> bary[i];

  for(int i=0;i<n;i++){
    for(int j=aary[i];j<=bary[i];j++)
      data[j]+=1;
  }

  qsort (data, 1000001, sizeof(int), compare);

  ans = data[1000000];

  cout << ans << endl;
  return 0;
}
