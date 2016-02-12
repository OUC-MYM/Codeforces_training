#include <iostream>
#include <cstdio>
#include <cmath>
#include <algorithm>
#include <map>
using namespace std;


int main()
{
    double d,l,v1,v2;
    cin >> d >> l >> v1 >> v2;
    printf("%llf\n",(l-d)/(v1+v2));
}
