#include <stdio.h>
#include <conio.h>
int linear_search(int LA[10], int ub, int item)
{
    LA[ub+1] = item;
    int loc = 1;
    while(LA[loc] != item)
    {
        loc++;
    }
    if (loc == ub+1)
    {
        return 0;
    }
    else
    {
        return loc;
    }
}
void main()
{

clrscr();
int LA[10],i,ub,item,loc;
printf("Enter the no. of elements you want to store(0-10):");
scanf("%d",&ub);

printf("\nEnter %d elements in the linear array:\n",ub);
for(i=1;i<=ub;i++)
{
scanf("%d",&LA[i]);
}
printf("\nThe elements stored in LA are:\n");
for(i=1;i<=ub;i++)
{
printf("\nLA[%d]=%d",i,LA[i]);
}
printf("\n\nEnter the element you want to search:");
scanf("%d",&item);
loc = linear_search(LA,ub,item);
if(loc == 0){
    printf("Item no found");
}
else{
    printf("Item found at location %d (i.e. LA[%d])",loc,loc);
}


getch();
}
