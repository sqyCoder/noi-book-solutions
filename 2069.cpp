#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int a=0,b=0,c=0,d=0,e=0;
    cin>>a>>b>>c>>d>>e;
    a=a/3;
    b=b+a;
    e=e+a;
    b=b/3;
    a=a+b;
    c=c+b;
    c=c/3;
    b=b+c;
    d=d+c;
    d=d/3;
    c=c+d;
    e=e+d;
    e=e/3;
    d=d+e;
    a=a+e;
    printf("%5d%5d%5d%5d%5d",a,b,c,d,e);
    return 0;
}
