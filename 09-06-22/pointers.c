#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdio.h>
int main()
{
   int *pc, c;

   c = 10;
   printf("Address of c: %p\n", &c);
   printf("Value of c: %d\n\n", c);  // 22

   pc = &c;
   printf("Address: %p\n", pc);
   printf("value: %d\n\n", *pc); // 22

   c = 12;
   printf("Address %p\n", pc);
   printf("value: %d\n\n", *pc); // 11

   *pc = 2;
   printf("Address of c: %p\n", &c);
   printf("Value of c: %d\n\n", c); // 2
   return 0;
}

void swap(int *a,int *b){
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
int main(){
    int a,b;
    scanf("%d  %d",&a,&b);
    swap(&a,&b);
     printf("%d %d",a,b);
}



