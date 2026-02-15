#include<iostream>
#include<cstring>
using namespace std;
const int N=510;
char arr[N];
char arr2[N];
int main()
{
    int i=0,count=0;
    double a=0,b=0;
    cin>>a>>arr>>arr2;
    while(arr[i]!='\0')
    {
        if(arr[i]==arr2[i])
        {
            count++;
        }
        i++;
    }
    int c=strlen(arr);
    b=(float)count/c;
    if(b>=a)
        cout<<"yes"<<endl;
    else
        cout<<"no"<<endl;
    return 0; 
}
