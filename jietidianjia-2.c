# include <stdio.h>

int main (void)

{
  float  electricity , univalence, price ;
  univalence=0.53;

  printf("Enter electricity: \n");
  scanf("%f", &electricity );

  if      (electricity<=50) {
      price=electricity*univalence;
  }

  else if (electricity > 50)   {  

      univalence=univalence+0.05;
      price=electricity*univalence; 
  }
  printf ("price is %.2f\n",price);

  return 0;

}
