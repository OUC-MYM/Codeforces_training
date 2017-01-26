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

int num[500];
int main()
{
    int n;
    cin >>n;
    int ans=0;
    for(int i=1; i<=n; i++)
        cin >> num[i];
    for(int i=1; i<=n; i++)
    {
        if(num[i]==1 && num[i-1]==1)
            num[i]=0;
        if(num[i]==2 && num[i-1]==2)
            num[i]=0;
        if(num[i]==3)
        {
            if(num[i-1]==1)
                num[i]=2;
            if(num[i-1]==2)
                num[i]=1;
        }
    }
    for(int i=1; i<=n; i++)
        if(num[i]==0)
            ans++;
    cout << ans << endl;
    return 0;
}
