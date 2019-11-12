# include <stdio.h>

int main (void)

{
    int n, sum = 0;
    int t;

    printf ("Enter n:\n");
    scanf ("%d",&n);

    for( t=1 ; t<=n ; t++ ){
        
        sum = sum + t;
    }

    printf ("sum is %d\n",sum);

    return 0;
}