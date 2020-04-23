  
#include<stdio.h>
#include<stdlib.h>
#include <locale.h>

int main(){

 	setlocale(LC_ALL, "Portuguese"); 
	
	char str[30]="Deus e bom o tempo todo";
	char *ptr;
	ptr=str;
	
	while(*ptr!=0){
		printf("%c",*ptr);
		ptr++;
	}
return 0;
}
