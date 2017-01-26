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

int num[200];

int main()
{
    int N;
    cin >>N;
    int sum=0;
    for(int i=1; i<=N; i++)
    {
        cin >> num[i];
        sum=sum+num[i];
    }
    int jun=sum/(N/2);
    for(int i=1; i<=N; i++)
    {
        if(num[i]==0)
            continue;
        int to=jun-num[i];
        for(int j=i+1; j<=N; j++)
            if(num[j]==to)
            {
                num[j]=0;
                cout << i << " " << j << endl;
                break;
            }
    }
    return 0;
}
