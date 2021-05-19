#include <stdio.h>
#include <math.h>

int main() {
   float a,b,diff;
    printf("__________________________________________\n\n");
    printf("               CALCULATOR\n");
    printf("__________________________________________\n\n");


   printf("Enter 1st number:");
   scanf("%f",&a);

   printf("Enter 2nd number:");
   scanf("%f",&b);

   diff= fabs(a-b);

   printf("Addition of the numbers= %f\n",a+b);
   printf("Difference of the numbers= %f\n",diff);
   printf("Multiplication of the numbers= %f\n",a*b);
   printf("Division of the numbers= %f\n",a/b);



  return 0;
}
