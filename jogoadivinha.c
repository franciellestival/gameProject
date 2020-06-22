#include <stdio.h>
#include <stdlib.h>
#include <time.h>

 int main()
{
 
    printf("\n\nJOGO DE ADIVINHAÇÃO!\n\n");

    // função para o programa gerar um número randômico baseado na contagem de segundos de 01/01/70 até agora...
	int segundos = time(0); 
	srand(segundos);
	int numerogrande = rand();
	int numerosecreto = numerogrande % 100; 

	int chute;
	int ganhou = 0; 
	int tentativas = 0;

	int numerodetentativas = 10;

for (int i = 1; i <= numerodetentativas; ++i)

	{
	
		printf("Tentativa %d\n", tentativas+1);
		printf("Qual é o seu chute? ");
		
		scanf("%d", &chute);
		printf("Seu chute foi %d \n", chute);

	    if (chute < 0) 
	    {
	    	printf("Você não pode chutar números negativos!\n");

	    	continue;

	    }

	    int acertou = chute == numerosecreto;
	    int maior = chute > numerosecreto;

		    if (acertou)
		    {
		    	printf("Parabéns! Você acertou!\n");

		    	ganhou = 1;
		    	break;
				
		    }
	
		    else if (maior)
		    {
		    	printf("Seu chute foi maior que o número secreto!\n\n");

		    
		    } 
		    else 
		    {
				printf("Seu chute foi menor que o número secreto!\n\n");

			}

	tentativas++;

	}

		 if (tentativas == 10)

		{

			printf("VOCÊ ESGOTOU TODAS AS TENTATIVAS!!\n");
			printf("O número secreto era %d .\n", numerosecreto);
			printf("VOCÊ PERDEU!!!\n");
		
		}

    printf("FIM DE JOGO!\n");
    printf("Obrigado por jogar!\n\n\n\n");
}


