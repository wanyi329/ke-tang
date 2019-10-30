# include <stdio.h>

int main (void)

{
  int electricity , univalence, price ;
   univalence= 0.53;
   printf("Enter electricity: \n");
    scanf("%d", &electricity );

    if(electricity<=50) {
      price=electricity*univalence;
    }
    else {
     univalence=univalence+0.05;
      price=electricity*univalence; 
      }
     printf ("price is %d ",price);

   return 0;

}