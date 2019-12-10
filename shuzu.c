# include <stdio.h>
int main (void)

{
    int a[10] , i ;
 
    printf ("Enter array a:\n");
    for(i=0;i<10;i++)
    {
        scanf ("%d",&a[i]);
    }
    
    for (i=9;i>=0;i--)
    {
        printf ("%5d",a[i]);
    }

    return 0;
}