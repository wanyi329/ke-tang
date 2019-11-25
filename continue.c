# include <stdio.h>

int main (void)

{
  int i;

    for ( i=1; i<=5; i++ ){

        if (3==i){
            continue;
            printf ("%d",i);

        }
        printf ("%d\n",i);
    }

return 0;
}