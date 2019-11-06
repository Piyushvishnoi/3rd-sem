#include<iostream>
using namespace std;
int main()
{
int n=6,i;
int sta[n],end[n];
for(i=0;i<n;i++)
{
cout<<"enter starting time of activity "<<i+1<<" :";
cin>>sta[i];
cout<<"enter ending time of activity"<< i+1<<" :";
cin>>end[i];
}
//sorting according to finishing time
int act;
act=0;
cout<<endl;
for(i=0;i<n;i++)
{
if(end[i] > end[i+1])
{
int temp=end[i+1];
end[i+1]=end[i];
end[i]=temp;
temp=sta[i+1];
sta[i+1]=sta[i];
sta[i]=temp;
}
}
cout<<endl<<"printing the sorted array";
for(i=0;i<n;i++)
{
cout<<endl<<" ending time of activity "<<i+1<<" :";
cout<<end[i];
}
int key=end[0];
for(i=0;i<n;i++)
{
if(key >= sta[i+1])
{
key=end[i+1];
act++;
}
}
cout<<"no of max activities"<<act;
return 0;
}










