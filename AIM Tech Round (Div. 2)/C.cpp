#include <iostream>
#include <cstdio>
#include <cmath>
#include <algorithm>
#include <map>
using namespace std;

bool link[500+10][500+10];
int in[500+10];
char str[500+10];
int n,m;

bool check()
{
    for(int i=1; i<=n; i++)
        for(int j=1; j<=n; j++)
            if(i!=j)
            {
                if(link[i][j]&&abs(str[i]-str[j])>1)
                    return 0;
                if(!link[i][j]&&abs(str[i]-str[j])<=1)
                    return 0;
            }
    return 1;
}

int main()
{
    cin >> n >> m;
    int u,v;
    while(m--)
    {
        cin >> u >> v;
        link[u][v]=link[v][u]=1;
        in[v]++;
        in[u]++;
    }

    for(int i=1; i<=n; i++)
        if(in[i]==n-1)
            str[i]='b';

    for(int i=1; i<=n; i++)
        if(str[i]==0)
        {
            str[i]='a';
            for(int j=1; j<=n; j++)
                if(str[j]==0)
                {
                    if(link[i][j])
                        str[j]='a';
                    else
                        str[j]='c';
                }
            break;
        }

    if(check())
    {
        cout << "Yes" << endl;
        for(int i=1; i<=n; i++)
            cout << str[i];
    }
    else
        cout << "No" << endl;
}
