#include<stdio.h>
#include<unistd.h>
int wait(int);
int signal(int);
int main()
{
int emp,n,f,buf,m;
printf("Enter the no of processes:");
scanf("%d",&n);
emp=n;
f=0;
m=1;

while(emp>0)
{
if(f!=n)          //producer produces working
{
printf("process %d produced by producer\n",f+1);
m=wait(m);
printf("placing an item in buffer! \n");
m=signal(m);
sleep(2);
}
if(emp!=0)         //consumer consume processes
{
m=wait(m);
printf("removing an item from buffer! \n");
m=signal(m);
printf("process %d consumed by consumer\n",f+1);
 
f=signal(f);
emp=wait(emp);
printf("\n");
}
}
return 0;
}

int wait(int m)
{
return(--m);
}
int signal(int m)
{
return (++m);
}















