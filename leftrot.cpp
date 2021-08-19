/* Question of hacker rank interview preparation  to left rotate the array*/
#include<iostream>
using namespace std;
int main()
{
    int n,i,d;
    cin>>n;
    cin>>d;//number of rotations
    int a[n],b[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int j=0;
    for(i=d;i<n;i++)
    {
        b[j++]=a[i];
    }
    for(i=0;i<d;i++)
    {
        b[j++]=a[i];
    }
    for(j=0;j<n;j++)
    {
        cout<<b[j]<<" ";
    }
    
    return 0;
}
