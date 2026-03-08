#include <stdio.h>
#include <conio.h>

int binary_search(int LA[10], int ub, int item){
    int beg = 1, end = ub;      //initialize beginning and ending
    int mid = (beg + end)/2;    //initialize middle
    while(LA[mid] != item && beg <= end){ //loop until item is found at middle or beg exceeds end
        if(item < LA[mid]){     //if item is less than middle element, search in left half
            end = mid-1;
        }
        else{                   //else, search in right half
            beg = mid+1;
        }
        mid = (beg + end)/2;    //find mid of new searching area
    }
    if(LA[mid] == item){
        return mid;             //item found and mid
    }
    else{
        return 0;               //item not found(beg exceeded end)
    }
}
int main() {
    clrscr();
int LA[10],i,ub,item,loc;
printf("Enter the no. of elements you want to store(0-10):"); //set upper-bound
scanf("%d",&ub);

printf("\nEnter %d elements in the linear array(In ascending order):\n",ub);
for(i=1;i<=ub;i++)
{
scanf("%d",&LA[i]);             //initialize array:LA
}
printf("\nThe elements stored in LA are:\n");
for(i=1;i<=ub;i++)
{
printf("\nLA[%d] = %d",i,LA[i]);  //traverse array:LA
}
printf("\n\nEnter the element you want to search:");
scanf("%d",&item);
loc = binary_search(LA,ub,item);    //assign returned value of binary_search to loc
 if(loc == 0){
    printf("Item not found");
}
else{
    printf("Item found at location %d (i.e. LA[%d])",loc,loc);
}


getch();
    return 0;
}
