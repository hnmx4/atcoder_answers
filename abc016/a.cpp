#include <iostream>
using namespace std;

struct _node{
  int frn[10];
  int goal[10];
  int dist[10];
};

int main(){
  int n,m,a,b,af,bf,flag=0;
  int i,j,k,l;
  _node *f;

  f = new _node[10];

  for(i=0;i<10;i++) f[i].count = 0;

  cin >> n >> m;
  for(i=0;i<m;i++){
    cin >> a >> b;
    a--; b--;
    f[a].frn[b] = 1;
    f[b].frn[a] = 1;
  }

  for(i=0;i<10;i++){
    //    while
  }

  delete[] f;

  return 0;
}
