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

long long int dp[100];
long long int ans[100];

int main()
{
    dp[1]=2;
    for(int i=2; i<=60; i++)
        dp[i]=dp[i-1]*2;
    ans[1]=2;
    for(int i=2; i<=60; i++)
        ans[i]=ans[i-1]+dp[i];
    int n;
    cin >> n;
    cout << ans[n] << endl;
    return 0;
}
