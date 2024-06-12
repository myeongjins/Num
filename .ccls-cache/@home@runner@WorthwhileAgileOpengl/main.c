#include <stdio.h>

int main() { 
    int i = 0;
    printf("3의 배수는 : ");
    scanf("%d", &i);
    
    while(i <= 100){
       if(i % 3 == 0){
        printf("%d ", i);
    }
    i++;
    }
}
