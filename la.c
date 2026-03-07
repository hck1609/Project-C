#include <stdio.h>
#include <conio.h>
void main()
{

clrscr();
int LA[10],i,ub;
printf("Enter the no. of elements you want to store(0-10):");
scanf("%d",&ub);

printf("Enter %d elements in the linear array\n",ub);
for(i=1;i<=ub;i++)
{
scanf("%d",&LA[i]);
}
printf("The elements stored in LA are:\n");
for(i=1;i<=ub;i++)
{
printf("\nLA[%d]=%d",i,LA[i]);
}
getch();
}
