#include<stdio.h>

int main(){
    int a=1, b=2, c=3;
    int j = 0;
    j = (a+b)*b++-a!=b;

    printf("a:= %d \t b:=%d \t c:= %d \t j:= %d\n \t %d", a,b,c,j,a!=b);
    return 0;
}
