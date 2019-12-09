# include <stdio.h>

int isPrime(int x)
{
    if ((x%4==0 && x%100==0) || (x%400==0)){ 
          return 1;
          }
        
        else {
            return 0;
        }
}

int main (void)
{
    int n,flag;
    printf("Enter n:\n");
    scanf("%d",&n);

    flag=isPrime(n);
    if (flag==1){
        printf ("Yes!\n");
    }
    else
    {
       printf ("No!\n");
    }
  
    return 0;
}
