#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){

char incog;

printf("Program in C to fin if  is alphabet, digit or special character\n\n");
printf("Insert the incignita\n");
scanf("%c", &incog);

if((incog >= 'a' && incog <= 'z') || (incog >= 'A' && incog <= 'Z')){
	printf("'%c' is alphabet.\n",incog);
}else if(incog >= '0' && incog <= '9'){
	printf("'%c'is digit.\n", incog);
}else{
printf("'%c' is especial character.\n", incog);
}
return 0;
}

