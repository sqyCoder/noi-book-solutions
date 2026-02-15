#include<iostream>
#include<cstring>
#include<cctype>
const int N=30;
char arr[N];
using namespace std;
int main()
{
    int n=0,i=0,j=0;
    cin>>n;
    int a=strlen(arr);
    for(i=0;i<n;i++)
    {
        cin>>arr;
        for(j=0;j<a;j++)
        {
        if(islower(arr[j]) && j==0)
          toupper(arr[j]);
        else if(isupper(arr[j]) && j!=0)
         tolower(arr[j]);
        }
        cout<<arr<<endl;
    }
    return 0; 
}
