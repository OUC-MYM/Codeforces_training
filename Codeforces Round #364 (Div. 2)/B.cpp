#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
#include <cmath>
#include <map>
#include <queue>
#include <stack>
#include <vector>
#include <set>
#define PI 3.1415926
#define INF 0x3f3f3f3f
#define MAXN 2500
using namespace std;

map <int,int> r,w;

int main()
{
   long long n,m;
   long long rl=0,wl=0;
   cin >> n >> m;
   for(int i=0;i<m;i++)
   {
       int a,b;
       cin >> a >> b;
       if(r[a]==0)
       {
           r[a]=1;
           rl++;
       }
       if(w[b]==0)
       {
           w[b]=1;
           wl++;
       }
       cout << (n-rl)*(n-wl) << " ";
   }
   return 0;
}
