#include <iostream>
#include <string.h>
#include <math.h>
using namespace std;

int main()
{
  int t[4],lt,lv,n,x[1000],y[1000],cl,flag=0;
  double l[1000];

  for (int i=0;i<4;i++)
    cin >> t[i];
  cin >> lt >> lv;
  cin >> n;
  for (int i=0;i<n;i++)
    cin >> x[i] >> y[i];

  cl = lt*lv;

  for (int i=0;i<n;i++){
    l[i] = sqrt( pow((y[i]-t[1]),2)+pow((x[i]-t[0]),2));
    l[i] += sqrt( pow((y[i]-t[3]),2)+pow((x[i]-t[2]),2));
    cout << (double)cl-l[i] << endl;
    if ((double)cl-l[i]>=0)
      flag = 1;
  }

  switch (flag){
  case 0:
    cout << "NO" <<endl;
    break;
  case 1:
    cout << "YES" <<endl;
    break;
  }

  return 0;
}

