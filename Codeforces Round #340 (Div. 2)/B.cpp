#include <iostream>
using namespace std;

int main()
{
    long long int ans=1;
    int n,temp,flag=0,cnt=0;
    cin >> n;
    for(int i=1; i<=n; i++)
    {
        cin >> temp;
        if(n==1)
        {
            if(temp==0)
                cout << 0 << endl;
            else
                cout << 1 << endl;
            return 0;
        }
        if(temp==1)
        {
            flag=1;
            if(cnt>0)
                ans=ans*(cnt+1);
            cnt=0;
        }
        if(temp==0&&flag==1)
        {
            cnt++;
        }
    }
    if(flag==0)
    {
        cout << 0 << endl;
        return 0;
    }
    cout << ans << endl;
}
