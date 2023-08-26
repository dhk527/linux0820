#include <stdio.h>

int sum(int a, float b){
    int c;
    c=a+b;

    return c;    
}

int main(){
    int s=sum(1234,46.34);
    printf("sum : %d \n",s);
    return 0;
}