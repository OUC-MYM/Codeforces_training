#include <iostream>
#include <cstdio>
#include <cmath>
#include <algorithm>
#include <map>
using namespace std;

long double x,y,z;

string ans[]= {"","x^y^z","x^z^y","(x^y)^z","(x^z)^y","y^x^z","y^z^x","(y^x)^z","(y^z)^x","z^x^y","z^y^x","(z^x)^y","(z^y)^x"};
long double a[13];


int main()
{
    cin >> x >> y >> z;
    a[1]=pow(y,z)*log(x);
    a[2]=pow(z,y)*log(x);
    a[3]=y*z*log(x);
    a[4]=a[3];

    a[5]=pow(x,z)*log(y);
    a[6]=pow(z,x)*log(y);
    a[7]=x*z*log(y);
    a[8]=a[7];

    a[9]=pow(x,y)*log(z);
    a[10]=pow(y,x)*log(z);
    a[11]=x*y*log(z);
    a[12]=a[11];

    int flag=1;
    long double MAX=a[1];
    for(int i=2; i<=12; i++)
        if(MAX<a[i])
        {
            MAX=a[i];
            flag=i;
        }
    cout << ans[flag] << endl;
}
