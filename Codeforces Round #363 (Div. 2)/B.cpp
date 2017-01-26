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

char mapp[1500][1500];

struct no
{
    int x,y;
};

vector <no> mark;
int n,m;
int nn,mm;

bool find()
{
    for(int i=1; i<=n; i++)
        for(int j=1; j<=m; j++)
        {
            int x=i;
            int y=j;
            int k;
            for(k=0; k<mark.size(); k++)
                if(mark[k].x != x && mark[k].y!=y)
                    break;
            if(k==mark.size())
            {
                nn=i;
                mm=j;
                return 1;
            }
        }
    return 0;
}

int main()
{
    cin >> n >> m;
    for(int i=1; i<=n; i++)
        for(int j=1; j<=m; j++)
        {
            cin >> mapp[i][j];
            if(mapp[i][j]=='*')
                mark.push_back(no {i,j});
        }
    if(mark.size()==0)
        cout << "YES" << endl << 1 << " " << 1 << endl;
    else
    {
        if(find())
            cout << "YES" << endl << nn << " " << mm << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}
