#include <stdio.h>
#define MAX_SIZE 100
int main()
{
    int arr1[MAX_SIZE];
    int i, max, min, size;
	   printf("Enter the size of the array :");
       scanf("%d",&size);
   
       printf("Enter the elements in the array :");
       for(i=0;i<size;i++)
       {
	      scanf("%d",&arr1[i]);
	    }


    max = arr1[0];
    min = arr1[0];

    for(i=1; i<size; i++)
    {
        if(arr1[i]>max)
        {
            max = arr1[i];
        }


        if(arr1[i]<min)
        {
            min = arr1[i];
        }
    }
    printf("Maximum element is : %d\n", max);
    printf("Minimum element is : %d\n\n", min);
}