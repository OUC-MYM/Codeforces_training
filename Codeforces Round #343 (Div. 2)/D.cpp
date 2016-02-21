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
#define INF 0x3f3f3f3f
#define MAXN 2500
using namespace std;

double PI=4*atan(1);

double f(double r,double h)
{
    return PI*r*r*h;
}
int n;
double ans=0;
double v[100010];

void solve(int num,double sum,double old)
{
    ans=max(ans,sum);
    if(num>n)
        return;

    if(old<v[num])
        solve(num+1,sum+v[num],v[num]);
    solve(num+1,sum,old);
}

int main()
{
    scanf("%d",&n);
    double r,h;

    for(int i=0; i<n; i++)
    {
        scanf("%lf%lf",&r,&h);
        v[i]=f(r,h);
    }
    solve(0,0,0);
    printf("%lf",ans);
    return 0;
}
