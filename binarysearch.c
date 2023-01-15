#include<stdio.h>
#define size 5
void main()
{
    int l=0,r=size-1,ar[size],key,mid,j;
      printf(" Enter the elements in the array :\n");
    for (  j = 0; j <size; j++)
    {
        scanf("%d", &ar[j]);
    }
    printf("Enter the element that you want to search:\n");
    scanf("%d",&key);
    while(l<=r)
    {
       mid=(l+r)/2;  

     if(key==ar[mid]){
        printf("Element found at %d position\n",mid+1);
        break;
    }
       
    else if(key>ar[mid])
    {
       l=mid+1;
    }
    
    else
    {
        r=mid-1;
    }
    
       }
if(l>r)
{
    printf("Element not found \n");
} 
}
