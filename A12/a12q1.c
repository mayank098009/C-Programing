#include<stdio.h>

int main(){
    int N;

    printf("HELLO WORLD IN N TIMES");
    scanf("%d",&N);

    while(N>0){
        printf("HELLO WORLD",N);
        N=N-1;
    }
    return 0;
}