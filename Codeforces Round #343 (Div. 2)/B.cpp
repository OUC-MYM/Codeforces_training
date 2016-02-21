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

int cntm[400],cntf[400];

int main()
{
    int n;
    cin >> n;
    char temp;
    int x,y;
    for(int i=0; i<n; i++)
    {
        cin >> temp >> x >> y;
        if(temp=='M')
            for(int i=x; i<=y; i++)
                cntm[i]++;
        if(temp=='F')
            for(int i=x; i<=y; i++)
                cntf[i]++;
    }
    int ans=0;
    for(int i=0; i<=370; i++)
        ans=max(ans,min(cntm[i],cntf[i]));
    cout << ans*2 << endl;
    return 0;
}
