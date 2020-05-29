#include <stdio.h>

int main(){
int num1;
int num2;
int num3;

printf("Program in C to identify the greatest  number\n\n");
printf("Insert the three numbers:\n");
scanf("%d %d %d", &num1, &num2, &num3);

if(num1 > num2 && num1 > num3){
printf(" % is the greatest number\n",num1);

}else if(num2 > num1 && num2 > num3){
printf(" % is the greatest number\n", num2);

}else{
printf(" %d is the greatest number\n",num3);
}
return 0;
}

