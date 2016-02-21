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


int main()
{
    double n,t;
    cin >> n >> t;
    double ans=1.000000011;
    ans=pow(ans,t);
    printf("%.9lf",n*ans);
    return 0;
}
