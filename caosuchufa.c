# include <stdio.h>
 
 int main (void)

{
   int 限速V0 ,实际速度V,罚款200,吊销驾驶证,无处罚；
       限速V0=50;

   printf("Enter实际速度V:\n"); 
   scanf("%d",&实际速度V);

   if ( （1+0.1)限速V0<实际速度V<=(1+0.5)限速V0 ) {
       罚款200；

       printf ("罚款200 %d\n");

   }
   else if ( 实际速度>(1+0.5)限速V0 ){
       吊销驾驶证；

       printf ("吊销驾驶证 %d\n");

    }

       else
       {
           无处罚；
           printf("无处罚 %d\n");
       }
       
   return 0；

}