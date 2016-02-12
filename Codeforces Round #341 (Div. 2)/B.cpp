#include <iostream>
#include <climits>
using namespace std;

int vis1[20000],vis2[20000];

int main()
{
    int T;
    cin >> T;
    int x,y;
    long long int ans=0;
    while(T--)
    {
        cin >> x >> y;
        if(vis1[x+y])
            ans=ans+vis1[x+y];
        vis1[x+y]++;
        if(vis2[x-y+10000])
            ans=ans+vis2[x-y+10000];
        vis2[x-y+10000]++;
    }
    cout << ans << endl;
}
