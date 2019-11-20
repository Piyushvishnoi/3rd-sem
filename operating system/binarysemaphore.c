#include<stdio.h>
#include<unistd.h>
int acquire(int s)
{
return ++s;
}
int release(int s)
{
return --s;
}
int main()
{
printf("Binary Semaphore Synchronization\n");
printf("................................................\n");
int bs,n,i;
printf("Enter no of processes:");
scanf("%d",&n);
bs=0;
for(i=0;i<n;i++)
{
printf("\nprocess - %d running ...\n",i+1);
if(i<n-1)
printf("\nprocess - %d waiting ...\n",i+2);
bs=acquire(bs);
if(bs==1)
{
printf("P- %d Entered critical section\n",i+1);
sleep(3);
printf("P- %d leaving critical section\n",i+1);
bs=release(bs);
}
}
return 0;
}






