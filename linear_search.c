#include <stdio.h>
#include <conio.h>
int linear_search(int LA[10], int ub, int item)
{
    LA[ub+1] = item;
    int location = 1;          //initialised searching location to 1
    while(LA[location] != item)
    {
        location++;
    }
    if (location == ub+1)   //if location is ub+1, it means item is not found in the array
    {
        return 0;         //item not found
    }
    else
    {
        return location;  //item found at location
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
scanf("%d",&LA[i]);             //initialize array:LA
}
printf("\nThe elements stored in LA are:\n");
for(i=1;i<=ub;i++)
{
printf("\nLA[%d]=%d",i,LA[i]);  //traverse array:LA
}
printf("\n\nEnter the element you want to search:");
scanf("%d",&item);
loc = linear_search(LA,ub,item);    //assign returned value of linear_search to loc
if(loc == 0){
    printf("Item not found");
}
else{
    printf("Item found at location %d (i.e. LA[%d])",loc,loc);
}


getch();
}
