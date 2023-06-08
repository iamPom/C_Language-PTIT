#include <stdio.h>
#include <math.h>

int main(){
   float a, b, c, x1, x2, x, delta;
   printf("nhap vao a, b, c: ");
   scanf("%f%f%f", &a, &b, &c);
  
   delta = b * 2 - 4 * a * c;
   x = -b / (2 * a);
   x1 = (-b - sqrt(delta)) / (2 * a);
   x2 = (-b + sqrt(delta)) / (2* a);
   if (a == b && b == c & a == 0){
   	   printf("phuong trinh vo so nghiem\n");
   	   
    } else if(a == b && a == 0 && c != 0){
   	      printf("phuong trinh vo nghiem\n");
        }        else if(delta < 0){
   	      printf("phuong trinh vo nghiem");
        }         else if (delta == 0){
           printf ("phuong trinh co nghiem kep x = %.2f\n", x);
        }          else{
    	   printf("phuong trinh co 2  nghiem la x1 = %.2f va x2 = %.2f\n", x1, x2);
    }
   return 0;
}

