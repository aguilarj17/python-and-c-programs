#include <stdio.h>

void main(){
int num;
int num2;

printf("Program in C to identify if if a number is even or odd\n\n");
printf("Insert the number\n");
scanf("%d", &num);

num2 = num % 2;
if(num2 == 0){
printf("%d is an even number\n",num);
}else{
printf("%d is an odd number\n", num);
}
}
