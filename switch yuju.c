# include <stdio.h>
int main (void)

{
    int score ,grade;

    printf ("Enter score :\n");
    scanf ("%d",&score);

    grade=(score>=90) ? 4:
    grade=(score>=80 && score <90)? 3:
    grade=(score>=70 && score <80) ?2:
    grade=(score>=60 && score <70)? 1:
    grade=(score<60)? 0:



 switch (grade) {
        case 0:printf("E\n");
               break;
        case 1:printf("D\n");
               break;
        case 2:printf("C\n");
               break;
        case 3:printf("B\n");
               break;
        case 4:printf("A\n");
               break;
        default:printf("Illegal grade\n");
               break;
    }

    return 0;
}








}






