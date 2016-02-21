#include <iostream>
using namespace std;

int main()
{
    int x,ans=0;
    cin >> x;
    while(x>=5)
    {
        x=x-5;
        ans++;
    }
    while(x>=4)
    {
        x=x-4;
        ans++;
    }
    while(x>=3)
    {
        x=x-3;
        ans++;
    }
    while(x>=2)
    {
        x=x-2;
        ans++;
    }
    ans=ans+x;
    cout << ans << endl;
}
