#include <iostream>
using namespace std;

int index(int i, int j)
{
  if ((i+j)%2 == 0)
    return 0;
  else
    return 1;
}
int main()
{
  int h, w, c[100][100], count=0, result, con[2]={0}, ni, nj, flag=0;
  cin >> h >> w ;
  for (int i=0;i<h;i++)
    for (int j=0;j<w;j++)
      cin >> c[i][j];

  for (int i=0;i<h;i++){
    for (int j=0;j<w;j++){
      for (int k=1;k<=w*h;k++){
	ni = i; nj = j;
	count = 1;
	con[index(i,j)]+=c[i][j];
	while (count<=k){
	  if (i!=0)
	    ni--;
	  else if (j!=w-1)
	    nj++;
	  else if (i!=h-1)
	    i++;
	  else if (j!=0)
	    j--;
	  count++;
	  con[index(ni,nj)]+=c[ni][nj];
	  if (con[0] == con[1] && result < count){
	    flag = 1;
	    result = count;
	  }
	}
      }
    }
  }

  cout << result << endl;

  return 0;
}
