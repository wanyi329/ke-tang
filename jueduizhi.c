# include <stdio.h>
int main (void)
{
    int t,jueduizhi;

    printf("Enter t:\n");
    scanf("%d",&t);

     jueduizhi = (t>=0)? t: -t ;

     printf ("jueduizhi is %d\n",jueduizhi);

     return 0;

}