# include <stdio.h>
int main (void)

{
    int n ,i;
    double Fn;
    
    printf ("Enter n:\n");
    scanf ("%d",&n);
    
    if (n<=2){

        Fn=1;
    
    printf ("Fn=%.0lf\n",Fn);
    
    }
    else { 

        int F1=1 ,F2=1;

        for( i=3; i<=n; i++){
            Fn=F1+F2;
            F1=F2;
            F2=Fn;

        
    printf ("Fn=%.0lf\n",Fn);

    }
    }
    return 0;
}