#include <stdio.h>
int main (void){
	int n;
	    do
	    {
    	    printf("Qual altura da escada: ");
    		scanf("%d", &n);
	    }
	    
	    while(n < 1 || n > 8);      //loop p/ o user digitar um num entre 1 e 8
	    
	    //loop externo p/ controlar a alt da piramide
	    for(int i = 0; i < n; i++)
	    {
	       //loop interno p/ imprimir espaços a esquerda
	        for (int j = 0; j < n - i - 1; j++)
	        {
	            printf(" ");
	        }
	        //imprimir # a esquerda
	        for(int k = 0; k < i + 1; k++)
	        {
	            printf("#");
	        }
	        //espaço entre as escadas
	        printf(" ");
	        //loop interno p/ imprimir # a direita
	        for(int k = 0; k < i + 1; k++)
	        {
	            printf("#");
	        }
	        
	    printf("\n"); //quebra a linha toda vez
	    
	    }
	    return 0;
    }