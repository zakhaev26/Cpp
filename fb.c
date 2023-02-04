#include<stdio.h>
void fizzBuzz(int n) {

for(int i=1;i<=n;i++){
    
    if(i%3==0 && i%5==0){
        printf("FizzBuzz");
        printf("\n");
    }
    else if(i%3==0){
        printf("Fizz");
        printf("\n");
    }
    else if(i%5==0){
        printf("Buzz");
        printf("\n");
    }
    else{
        printf("%d",i);
        printf("\n");
    }
    
}
}

int main(){



fizzBuzz(15);

return 0;
}