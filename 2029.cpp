#include<iostream>
using namespace std;

int main()
{
int a=0,b=0,c=0,d=0; 
for(a=100;a<=999;a++)
{
b=a%10;
c=(a/10)%10;
d=a/100;
if(a==c*c*c+b*b*b+d*d*d)
cout << a << endl;
}
return 0;
}
