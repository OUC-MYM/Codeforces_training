#include <iostream>
using namespace std;

int map[510][510];

int main()
{
    int n,k;
    cin >> n >> k;
    int cnt=0;
    for(int i=1; i<=n; i++)
        for(int j=1; j<k; j++)
            map[i][j]=++cnt;
    cnt=n*n;
    for(int i=n; i>=1; i--)
        for(int j=n; j>=k; j--)
            map[i][j]=cnt--;
    int sum=0;
    for(int i=1; i<=n; i++)
        sum=sum+map[i][k];
    cout << sum << endl;
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n; j++)
            cout << map[i][j] << " ";
        cout << endl;
    }
}
