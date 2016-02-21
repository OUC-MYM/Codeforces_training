#include <iostream>
#include <algorithm>
using namespace std;

int n;
long long int x1,y1,x2,y2;
struct point
{
    long long int d1;
    long long int d2;
} d[2020];

long long int dis1(long long int x,long long int y)
{
    return (x-x1)*(x-x1)+(y-y1)*(y-y1);
}

long long int dis2(long long int x,long long int y)
{
    return (x-x2)*(x-x2)+(y-y2)*(y-y2);
}

bool cmp(point a,point b)
{
    return a.d1<b.d1;
}

int main()
{
    cin >> n >> x1 >> y1 >> x2 >> y2;
    long long int x,y;
    long long int maxd2=0;
    for(int i=1; i<=n; i++)
    {
        cin >> x >> y;
        d[i].d1=dis1(x,y);
        d[i].d2=dis2(x,y);
        maxd2=max(maxd2,d[i].d2);
    }
    sort(d+1,d+n+1,cmp);
    long long int ans=min(d[n].d1,maxd2);
    for(int i=1; i<=n; i++)
    {
        long long int tempmax=0;
        for(int j=i+1; j<=n; j++)
            tempmax=max(tempmax,d[j].d2);
        ans=min(ans,d[i].d1+tempmax);
    }
    cout << ans << endl;
}
