#include<iostream>
using namespace std;
int main()
{
    int n,i,j;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=n;i>0;i--)
    {
        if(a[i]<a[i+1])
        {
        for(j=0;j<i;j++)
        {
            if(a[j]>a[j+1])
            {
            int temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
        }
    }
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
}
