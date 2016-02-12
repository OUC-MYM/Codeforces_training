#include <iostream>
#include <climits>
using namespace std;

int minodd=INT_MAX;

int MINODD(int num)
{
    if(num%2)
        if(num<minodd)
            return num;
    return minodd;
}

int main()
{
    long long int sum=0;
    int t;
    cin >> t;
    int temp;
    while(t--)
    {
        cin >> temp;
        sum=sum+temp;
        minodd=MINODD(temp);
    }
    if(sum%2)
        sum=sum-minodd;
    cout << sum << endl;
}
