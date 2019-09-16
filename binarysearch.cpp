#include<iostream>
using namespace std;
int binarysearch(int[],int,int,int);
int main()
{
int arr[10],key;
for(int i=0;i<10;i++)
{
cin>>arr[i];
}
cout<<"enter the key to be find";
cin>>key;
int ret=binarysearch(arr,0,9,key);
cout<<"element found at position \t"<<ret;
return 0;
}
int binarysearch(int a[],int low,int high,int k)
{
while(low<=high)
{
int mid=(low+high)/2;
if(a[mid]>k)
{
high=mid-1;
}
else if(a[mid]<k)
{
low=mid+1;
}
else if(a[mid]==k)
{
return mid;
cout<<mid;
}
}
}



