#include<iostream>
#include<string.h>
#include<stdlib.h>
using namespace std;
int main()
{
    char a[10],b[10];
    int i,j,k=0,n,iq,af,c[10];
    cout<<"Enter the string of numbers for calculation";
    cin>>n;
    for(iq=0;n>0;iq++)
    {
        af=n%2;
        c[iq]=af;
        n=n/2;
    }
    j=iq;
    i=j;
    for(iq=iq-1;iq>=0;iq--)
    {
        cout<<c[iq]<<"\t";
    }
}
