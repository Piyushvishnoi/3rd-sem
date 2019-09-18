#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
int a[100],b[100],c[100],d[100],e[100],f[100],g[100],n, mid,i,j;
cout<<"enter the value of n";
cin>>n;
cout<<endl<<"enter n values in array"<<endl;
for(int i=0;i<n;i++)
{
cin>>a[i];
}
if(n%2==0)
{
int mid=n/2;
cout<<"first subarray is"<<endl;
for(int i=0;i<mid;i++)
{
b[i]=a[i];
cout<<b[i]<<endl;
}
cout<<"second subarray is"<<endl;
int sumofc=0;
for(int i=mid;i<n;i++)
{
c[i]=a[i];
cout<<c[i]<<endl;
 //sumofc=sumofc+c[i];
}
//cout<<"sum of second subarray is"<<sumofc<<endl;
}
if(n%2 != 0)
{
int mid=n/2;
for(int i=0;i<mid;i++)
{
b[i]=a[i];
cout<<"first subarray is"<<endl;
}
for(int i=mid;i<n;i++)
{
c[i]=a[i];
cout<<c[i]<<endl;
}
}
int sumofb=0;
int sumofc=0;
for(int i=0;i<4;i++)
{
sumofb=sumofb+b[i];
}
cout<<"sum of first sub array is"<<sumofb<<endl;
for(int i=4;i<8;i++)
{
sumofc=sumofc+c[i];
}
cout<<"sum of second subarray is"<<sumofc<<endl;
if(sumofb>sumofc)
{
cout<<"maximum sum is of first subarray"<<endl;
}
if(sumofb<sumofc)
{
cout<<"maximum sum is of second subarray"<<endl;
}
cout<<"endl"<<"dividing the left subarray into sub-sub arrays"<<endl;
int sumofd=0;
int sumofe=0;
for(int i=0;i<2;i++)
{
d[i]=b[i];
cout<<d[i]<<endl;
sumofd=sumofd+d[i];
}
cout<<"sum of left sub-sub array is:"<<sumofd<<endl;
for(int i=2;i<4;i++)
{
e[i]=b[i];
cout<<e[i]<<endl;
sumofe=sumofe+e[i];
}
cout<<"sum of right sub-sub array is:"<<sumofe<<endl;
int sumoff=0;
int sumofg=0;
cout<<"dividing the right subarray into sub-sub arrays"<<endl;
for(int i=4;i<6;i++)
{
f[i]=c[i];
cout<<f[i]<<endl;
sumoff=sumoff+f[i];
}
cout<<"sum of left sub-sub array is:"<<sumoff<<endl;
for(int i=6;i<8;i++)
{
g[i]=c[i];
cout<<g[i]<<endl;
sumofg=sumofg+g[i];
}
cout<<"sum of right sub-sub array is:"<<sumofg<<endl;
int max=0;
max = (sumofd > sumofe? sumofd : sumofe);
max = (sumoff > sumofg? (sumoff > max? sumoff : max) : (sumofg > max? sumofg : max));
cout<<endl<<"Maximum sum is"<<max;
return 0;
}
















