#include <stdio.h>

float calculatecommission(float sales){
 float commission;

if (sales>=100000){
   commission=sales*0.15;
   }
   else if(sales>=50000){
   commission=sales*0.1;
   }
   else if(sales>=20000){
   commission=sales*0.05;
   }
      else{commission=0;

      }
   return commission;
}
   int main(){
   float sales,total_earnings,commission;
   printf("Enter sales value:");
   scanf("%f",&sales);

   commission=calculatecommission(sales);
   printf("total commission is :%f\n", commission);
   total_earnings=sales+commission;
   printf("total earnings are:%f", total_earnings);
   return 0;

   }
