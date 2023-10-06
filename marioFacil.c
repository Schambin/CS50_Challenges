#include <stdio.h>
int main (void){
	int n;
	    do
	    {
    	    printf("Qual altura da escada: ");
    		scanf("%d", &n);
	    }
	    while(n < 1 || n > 8);      //do while loop p/ o user digitar um num entre 1 e 8
	    for(int i = 0; i < n; i++)
	    {
	        printf("#");    //print # enquanto i < n
	        printf(" ");    //print # enquanto i < n
	        for(int k = 0; k < i; k++)
	        {
	            printf("#");    //print enquanto k < i
	            
	        }
	    printf("\n"); //quebra a linha toda vez
	    }
    }
// nao faço a minima ideia de como resolvi isso, o importante é que deu certo e esta funcionando