#include <iostream>
using namespace std;

int main()
{
    string a,b;
    cin >> a >> b;
    int len1=a.length(),len2=b.length();
    int ans=0;
    for(int i=0; i<len1-len2+1; i++)
    {
        string temp=a.substr(i,len2);
        if(temp==b)
        {
            ans++;
            a[i+len2-1]='#';
        }
    }
    cout << ans << endl;
    return 0;
}
