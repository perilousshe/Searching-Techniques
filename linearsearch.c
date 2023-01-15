#include <stdio.h>
#define size 5
void main()
{
    int key, ar[size], found = 0,c=1;
    printf(" Enter the elements in the array :\n");
    for ( int j = 0; j < size; j++)
    {
        scanf("%d", &ar[j]);
    }
    printf("Enter the key or element that you want to search:\n");
    scanf("%d", &key);
    for (int i = 0; i< size; i++)
    {
        if(ar[i] == key)
        {
            found = 1;
            break;
        }
        c++;
    }

    if(found == 1)
    {
        printf("Element found at %d position\n",c);
    }
    else
    {
        printf("Element not found\n");
    }
}