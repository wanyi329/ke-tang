# include <stdio.h>

int main (void)

{
    int choice,t;
    double price;
    for (t=1; t<=5; t++)
    {
        printf ("[1]apples");
        printf ("[2]pears");
        printf ("[3]oranges");
        printf ("[4]grapes");
        printf ("[0]Exit");

        printf ("Enter choice:\n");
        scanf ("%d",&choice);

        if (choice==0 )
             break;
        
        
        switch (choice){
            case 1: price=3.00;
                    break;
            case 2: price=2.50;
                    break;
            case 3: price=4.10;
                    break;
            case 4 :price=10.20;
                    break;
            default:price=0.0;
                    break;
        }
    
        printf ("price is %.2lf\n",price);
    }
        return 0;


        
}