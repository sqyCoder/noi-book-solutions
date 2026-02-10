#include<iostream>
using namespace std;
const int N=1010;
int arr[N];
int main()
{
int t=0,b=0,c=0,d=0,i=0,a=0,temp=0;
cin>>a;
t=a;
for(i=0;i<t;i++)
{
    cin>>arr[i];
}
for(b=0;b<t-1;)
{
    d=0;
    for(c=1;c<t;c++)
    {
        if(arr[c]>arr[d])
        {
         temp=arr[d];
         arr[d]=arr[c];
         arr[c]=temp;
        }
        d++;
    }
    t--;
}
for(i=0;i<a;i++)
cout<<arr[i]<<endl;
}
