#include <iostream>
using namespace std;

long long int max(long long int a,long long int b)
{
    return a>b?a:b;
}
long long int ans[7];
int main()
{
    long long int n,a,b,c;
    cin >> n >> a >> b >> c;
    ans[0]=n/a;
    if(n>=b)
        ans[1]=(n-b)/(b-c)+1+((n-b)%(b-c)+c)/a;
    long long int sum=0;
    sum=max(ans[0],ans[1]);
    cout << sum << endl;
}
