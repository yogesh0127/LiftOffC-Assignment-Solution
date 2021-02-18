#include <stdio.h>
int main()
{
    int n;            
    printf("Enter the size of array : \n");
    scanf("%d", &n);
    int a[n];
    int i, evenpos=0 , evensum=0;
    printf("Enter the elements of the array :\n"); 
    for(i=0; i<n; i++)
    {
        scanf("%d" , &a[i]);
    }
    for(i=0; i<n; i++)
    {
    if(i%2==0)
        evenpos = evenpos+a[i];
    }    
    for(i=0; i<n; i++)
    {
        if(a[i]%2==0)
        evensum = evensum+a[i];
    }
    printf("Sum of elements in even position : %d  \n", evenpos);
    printf("Sum of elements hav4ing even number : %d", evensum);
    return 0;
}