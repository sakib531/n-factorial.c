#include<stdio.h>
int main (){
    int x,y,sum=1;
    printf("input the ammount of even number : ");
    scanf("%d",&y);
    printf("the even numbers  : \n");
    for (x=1; x<=y; x=x+1){
        printf("%d\n",x);
        sum=(sum*x);
    }
    printf("the sum of numbers  : \n");
    printf("%d\n",sum=sum);
    return 0;
}

