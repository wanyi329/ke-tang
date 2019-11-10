# include <stdio.h>

int main (void)

{
    double score;
    int class,A,B,C,D,E;

    printf ("Enter score:");
    scanf ("%lf",&score);

    if (score>=90){
        printf ("class is A");
    }

    else if (score>=80 && score <90 ){
        printf ("class is B");
    }

    else if (score>=70 && score <80 ){
       printf ("class is C");
    }

    else if (score>=60 && score <70 ){
        printf ("class is D");
    }
    
    else {
        printf ("class is E");
    }
    
    return 0;
    
}