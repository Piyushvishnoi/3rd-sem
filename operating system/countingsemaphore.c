#include<stdio.h>
#include<unistd.h>
int signal(int s)
{
return --s;
}
void wait()
{
sleep(3);
}
int main()
{
printf("Understanding Counting Semaphore\n");
printf("................................................\n");
int n,s,cs,i,temp,j;
printf("enter no of processes");
scanf("%d",&n);
printf("Enter maximum value of counting semaphore\n(How many processes can be stored and execute in one time):");
scanf("%d",&cs);
s=cs;
i=0;
temp=n%cs;
while(n>0)
{
for(j=0;j<cs;j++)
printf("process- %d waiting ..\n",i+j+1);
while(s>0)
{
printf("\n P- %d Entered into its critical section\n",i+1);
wait();
printf("\n P- %d leaving critical section\n",i+1);
s=signal(s);
i++;
}
s=cs;
n=n-cs;
if(n<cs)
break;
}
for(j=0;j<temp;j++)
printf("process- %d waiting ..\n",i+j+1);
for(j=0;j<=temp;j++)
{
printf("\n P- %d Entered into its critical section\n",i+1);
wait();
printf("\n P- %d leaving critical section\n",i+1);
i++;
}

return 0;
}






