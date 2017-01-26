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

int num[1000000];
char str[1000000];

int main()
{
    int n;
    cin >> n;
    cin >> str+1;

    int ans=INF;

    for(int i=1; i<=n; i++)
    {
        cin >> num[i];
        if(str[i]=='L' && str[i-1]=='R')
            ans=min(ans,(num[i]-num[i-1])/2);
    }
    if(ans==INF)
        ans=-1;
    cout << ans << endl;
    return 0;
}
