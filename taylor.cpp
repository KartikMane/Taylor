#include<iostream>
using namespace std;

double e(int x,int n)
{
    static double s;
    if(n==0)
    {
        return s;
    }
    s=1+x*s/n;
    return e(x,n-1);
}

double e2(int x, int n)
{
    double s=1;
    int i;
    double num=1;
    double den=1;
    for(i=1;i<=n;i++)
    {
        num=num*x;
        den=den*i;
        s=s+num/den;
    }
    return s;
}

int main()
{
    cout<<e(2,10)<<endl;
    double b=e2(2,10);
    cout<<b;
    return 0;
}