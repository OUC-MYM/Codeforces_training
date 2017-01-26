#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;

int f[200020];
int fd[200020];

int find(int x)
{
    if(f[x]!=x)
        return find(f[x]);
    return x;
}

bool un(int xx,int yy)
{
    int x=find(xx);
    int y=find(yy);
    if(x==y)
        return false;
    f[xx]=yy;
    return true;
}

int main()
{
    int n;
    cin >> n;

    for(int i=1; i<=n; i++)
        f[i]=i;

    int root=0;
    for(int i=1; i<=n; i++)
    {
        int u,v;
        cin >> v;
        if(i==v)
            root=i;
        fd[i]=v;
        u=i;
        un(u,v);
    }
    for(int i=1; i<=n; i++)
    {
        if(f[i]==i)
        {
            if(!root)
                root=i;
            else
                f[i]=root;
        }
    }
    int ans=0;
    for(int i=1; i<=n; i++)
        if(f[i]!=fd[i])
            ans++;
    cout << ans << endl;
    for(int i=1; i<=n; i++)
        cout << f[i] << " ";
    return 0;
}
