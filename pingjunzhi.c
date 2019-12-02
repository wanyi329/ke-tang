# include <stdio.h>

double average(double a, double b)

{
    return (a+b)/2;
}
    int main(void)
    {
        double x,y,aver;
        printf ("Enter x and y:\n");
        scanf ("%lf%lf",&x,&y);

        aver = average(x,y);

        printf ("平均值=%lf\n",aver);

        return 0;

    }

