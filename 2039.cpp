#include<iostream>
using namespace std;
const int N=1010;
int arr[N];
int main()
{
int c=0,i=0,a=0,temp=0;
cin>>a;
for(i=0;i<a;i++)
{
    cin>>arr[i];
}
for(i=0;i<a-1;i++)
{
    for(c=0;c<a-1-i;c++)
    {
        if(arr[c+1]>arr[c])
        {
         temp=arr[c];
         arr[c]=arr[c+1];
         arr[c+1]=temp;
        }
    }
}
for(i=0;i<a;i++)
cout<<arr[i]<<endl;
}
