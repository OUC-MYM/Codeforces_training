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

int f(int num)
{
    return num*(num-1)/2;
}

char mapp[150][150];

int main()
{
    int n;
    cin >> n;
    for(int i=1; i<=n; i++)
        for(int j=1; j<=n; j++)
            cin >> mapp[i][j];

    long long int ans=0;
    for(int i=1; i<=n; i++)
    {
        int temp=0;
        for(int j=1; j<=n; j++)
            if(mapp[i][j]=='C')
                temp++;
        ans=ans+f(temp);
    }
    for(int j=1; j<=n; j++)
    {
        int temp=0;
        for(int i=1; i<=n; i++)
            if(mapp[i][j]=='C')
                temp++;
        ans=ans+f(temp);
    }
    cout << ans << endl;
    return 0;
}
