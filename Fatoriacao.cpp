#include <stdio.h>

main(){
	
	int num;
	int fat = 1;
	
	printf("Informe um Numero:");
	scanf("%d", &num);
	
	
	for(int i = 1;i <= num; i++){
		
		fat = fat * i;
	}
	
	
	printf("Total = %d", fat);
	
	
    
  }    
	


