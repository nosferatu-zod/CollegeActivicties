#include <stdio.h>
#include <stdlib.h>

// @author Wesley Millan Silva
/*Validador de CPF*/

int main(){
	
	int numerocpf[10];
	int i, c=0;
	int resultado1, resultado2, dverificador1, dverificador2;
	
	printf("Digite seu CPF: ");
		for(i==0; i<11; i++){
		scanf("%d", &numerocpf[i]);
		}
		
		for(i==0; i<11; i++){
		printf("[%d]%d",i,numerocpf[i]);
		}
		
		
	
	//Validador 1
		int soma1;
		
		soma1= (numerocpf[0]*10)+(numerocpf[1]*9)+(numerocpf[2]*8)
		+(numerocpf[3]*7)+(numerocpf[4]*6)+(numerocpf[5]*5)
		+(numerocpf[6]*4)+(numerocpf[7]*3)+(numerocpf[8]*2);
		
		
	resultado1=soma1%11;
	
	if(resultado1==1 || resultado1==0){
		dverificador1=0;
		printf("\nDigito verificador 1: %d\n", dverificador1);
	}
	else{
		dverificador1=11-resultado1;
		printf("\nDigito verificador 1: %d\n", dverificador1);
	}
	
	//Validador 2
	
	int soma2=0;
	
	soma2= (numerocpf[0]*11)+(numerocpf[1]*10)+(numerocpf[2]*9)+(numerocpf[3]*8)
	+(numerocpf[4]*7)+(numerocpf[5]*6)
	+(numerocpf[6]*5)+(numerocpf[7]*4)+(numerocpf[8]*3+(numerocpf[9]*2));
	
	resultado2=soma2%11;
	
	if (resultado2==1 || resultado2==0){
		dverificador2=0;
		printf("\nDigito verificador 2: %d\n", dverificador2);
	}
	else{
		dverificador2= 11-resultado2;
		printf("\nDigito verificador 2: %d\n", dverificador2);
	}

if((dverificador1==numerocpf[9] ) && (dverificador2==numerocpf[10])){
	printf("\nCPF VALIDO!\n");
}
else{
	printf("\nProblema com CPF\n");
}
	
	
	
	

		
		
		
	system("PAUSE");
	return 0;
	
}


