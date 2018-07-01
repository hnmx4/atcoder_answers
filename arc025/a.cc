#include <iostream>
using namespace std;

int main()
{
  int d[7], j[7], g=0;
  for (int i=0;i<7;i++)
    cin >> d[i];
  for (int i=0;i<7;i++)
    cin >> j[i];

  for (int i=0;i<7;i++){
    if (d[i]>j[i])
      g+=d[i];
    else
      g+=j[i];
  }

  cout << g << endl;
  return 0;
}
