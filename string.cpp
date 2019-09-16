#include<iostream>
#include<string.h>
#include<stdlib.h>
using namespace std;
int main()
{
    char a[10],b[10];
    int i,j,k=0,n,iq,af,c[10];
    cout<<"Enter the string of numbers for calculation";
    cin>>a;
    j=strlen(a);
    cout<<"Length of string is\t"<<j<<"\n";
    for(i=j-1;i>=0;i--)
    {
        b[k]=a[i];
        k=k+1;
    }
    for(i=0;i<j;i++)
    {
        cout<<"original"<<a[i]<<"\t"<<"reverse"<<b[i]<<"\n";
    }
    n=atoi(b);
    cout<<"The whole string in one number is \t"<<n<<"\n";
    for(iq=0;n>0;iq++)
    {
        af=n%2;
        c[iq]=af;
        n=n/2;
    }
    for(iq=iq-1;iq>=0;iq--)
    {
        cout<<c[iq]<<"\t";
    }
}
