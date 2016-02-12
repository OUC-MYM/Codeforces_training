#include <iostream>
#include <cstdio>
#include <climits>
using namespace std;

int n,p;
int l[100100],r[100100],divp[100100];

double f(int x)
{
    int i=x,j=(x+1)%n;
    double temp1,temp2;
    temp1=(r[i]-l[i]+1-divp[i])*1.0/(r[i]-l[i]+1);
    temp2=(r[j]-l[j]+1-divp[j])*1.0/(r[j]-l[j]+1);
    return 1-temp1*temp2;
}

int main()
{
    cin >> n >> p;
    for(int i=0; i<n; i++)
    {
        cin >> l[i] >> r[i];
        divp[i]=r[i]/p-(l[i]-1)/p;
    }

    double ans=0;
    for(int i=0; i<n; i++)
        ans=ans+f(i);
    printf("%lf",ans*2000);
}
