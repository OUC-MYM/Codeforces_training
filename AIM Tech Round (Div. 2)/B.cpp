#include <iostream>
#include <cstdio>
#include <cmath>
#include <algorithm>
#include <map>
using namespace std;

int num[30];
map <int,bool> vis;
long long int sum=0;
void solve(int n)
{
    if(n<0)
        return;
    if(vis[n])
    {
        solve(n-1);
        return;
    }
    vis[n]=1;
    sum=sum+n;
}

int main()
{
    int t;
    cin >> t;
    int temp;

    while(t--)
    {
        cin >> temp;
        solve(temp);
    }
    cout << sum << endl;
}
