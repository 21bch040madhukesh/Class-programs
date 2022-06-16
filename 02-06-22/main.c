#include <stdio.h>
#include <stdlib.h>
/**int main(){
    char op;
    int a,b;
    printf("+ for addition\n");
    printf("- for sub\n");
    printf("* for mul \n");
    printf("/ for div\n");
    printf("r for rem\n");
    scanf("%c",&op);
    scanf("%d %d",a,b);
    switch(op)
    {
        case '+':
        {
            int c;
            c=a+b;
            printf("add is:%d\n",c);
            break;
        }
        case '-':
        {
            int c;
            c=a-b;
            printf("sub is:%d\n",c);
            break;
        }
        case '*':
        {
            int c;
            c=a*b;
            printf("product of %d,%d is:%d\n",a,b,c);
            break;
        }
        case '/':
        {
            int c;
            c=a/b;
            printf("quotient is:%d\n",c);
            break;
        }
        case 'r':
        {
            int c;
            c=a%b;
            printf("remainder of %d %% %d is:%d\n",a,b,c);
            break;
        }
    }
}
**/
int sum(int a){
    if (a==0){
        return a;
    }
    else{
        return a + sum(a-1);
    }
}
int main(){
    int n,ans;
    scanf("%d",&n);
    ans=sum(n);
    printf("%d",ans);
}



