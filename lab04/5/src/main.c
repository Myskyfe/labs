#include <stdio.h>
int main(){     
     int x;
     int y;
     printf("Введите число: ");
     scanf("%d", &x);
             if (x >= -3 && x < -1){
                  y = -x - 1;
                  }
             else if (x >= -1 && x < 1){     
                       y = x + 1;
                       }
             else if (x >= 1 && x <= 3){     
                       y = x - 1;
             }
             printf("y = %d", y);
return 0;
}             
