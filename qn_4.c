#include <stdio.h>
int main()
{
    int a[50], i ,n, large,small;
    printf("Enter the no of elements\n");
    scanf("%d" , &n);

    printf("Enter the Array\n");
    for(i=0; i<n; ++i)
    {
        scanf("%d" , &a[i]);
    }
    large=small=a[0];
    for(i=1; i<n; ++i)
    {
        if(a[i]>large)
        large = a[i];

        if(a[i]<small)
        small = a[i];

    }
    printf("The Largest element in the array is  %d \n", large);
    printf("The Smallest element in the array is %d \n", small);
    return 0;
}