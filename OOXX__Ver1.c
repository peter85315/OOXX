#include <stdio.h>

typedef struct 
{
	int input;
}player;

/*void showgame()
{
	char array[9]={'1','2','3','4','5','6','7','8','9'};
	printf("%c | %c | %c\n",array[0],array[1],array[2]);
	printf("--+---+--\n");
	printf("%c | %c | %c\n",array[3],array[4],array[5]);
	printf("--+---+--\n");
	printf("%c | %c | %c\n",array[6],array[7],array[8]);
}*/
//void check(char arr[]); 

int main()
{
	char array[9]={'1','2','3','4','5','6','7','8','9'};
	int a;
	player P1;
	player P2;
	printf("Welcome to OOXX!\n\n");
	printf("P1:O,P2:X\n\n");
	printf("Who will go first,1 or 2?\n\n");

	while(1)
	{
		scanf("%d", &a);
		printf("\n");
		if(a == 1)
		{
			while(1)
			{
				printf("\n    %c | %c | %c\n",array[0],array[1],array[2]);
				printf("    --+---+--\n");
				printf("    %c | %c | %c    P1's turn! Please input a number from 0 to 8.\n",array[3],array[4],array[5]);
				printf("    --+---+--\n");
				printf("    %c | %c | %c\n",array[6],array[7],array[8]);
				//printf("\nP1's turn! Please input a number from 0 to 8.\n");
				scanf("%d", &P1.input);
				array[P1.input-1]='O';
				if((array[0]=='O' && array[1]=='O' && array[2]=='O') || (array[3]=='O' && array[4]=='O' && array[5]=='O') || (array[6]=='O' && array[7]=='O' && array[8]=='O') || (array[0]=='O' && array[3]=='O' && array[6]=='O') || (array[1]=='O' && array[4]=='O' && array[7]=='O') || (array[2]=='O' && array[5]=='O' && array[8]=='O') || (array[0]=='O' && array[4]=='O' && array[8]=='O') || (array[2]=='O' && array[4]=='O' && array[6]=='O'))
				{
					printf("\n    %c | %c | %c\n",array[0],array[1],array[2]);
					printf("    --+---+--\n");
					printf("    %c | %c | %c    P1 win !!!!!!\n",array[3],array[4],array[5]);
					printf("    --+---+--\n");
					printf("    %c | %c | %c\n",array[6],array[7],array[8]);
					//printf("\nP1 win !!!!!!\n");
					return 0;
				}
				else if((array[0]=='X' && array[1]=='X' && array[2]=='X') || (array[3]=='X' && array[4]=='X' && array[5]=='X') || (array[6]=='X' && array[7]=='X' && array[8]=='X') || (array[0]=='X' && array[3]=='X' && array[6]=='X') || (array[1]=='X' && array[4]=='X' && array[7]=='X') || (array[2]=='X' && array[5]=='X' && array[8]=='X') || (array[0]=='X' && array[4]=='X' && array[8]=='X') || (array[2]=='X' && array[4]=='X' && array[6]=='X'))
				{
					printf("\n    %c | %c | %c\n",array[0],array[1],array[2]);
					printf("    --+---+--\n");
					printf("    %c | %c | %c    P2 win !!!!!!\n",array[3],array[4],array[5]);
					printf("    --+---+--\n");
					printf("    %c | %c | %c\n",array[6],array[7],array[8]);
					//printf("\nP2 win !!!!!!\n");
					return 0;
				}
				else
				{
					if((array[0] != '1') && (array[1] != '2') && (array[2] != '3') && (array[3] != '4') && (array[4] != '5') && (array[5] != '6') && (array[6] != '7') && (array[7] != '8') && (array[8] != '9'))
					{
						printf("\n                    draw ~~~~\n");
						return 0;
					}
				}
				printf("\n    %c | %c | %c\n",array[0],array[1],array[2]);
				printf("    --+---+--\n");
				printf("    %c | %c | %c    P2's turn! Please input a number from 0 to 8.\n",array[3],array[4],array[5]);
				printf("    --+---+--\n");
				printf("    %c | %c | %c\n",array[6],array[7],array[8]);
				//printf("\nP2's turn! Please input a number from 0 to 8.\n");
				scanf("%d", &P2.input);
				array[P2.input-1]='X';
				if((array[0]=='O' && array[1]=='O' && array[2]=='O') || (array[3]=='O' && array[4]=='O' && array[5]=='O') || (array[6]=='O' && array[7]=='O' && array[8]=='O') || (array[0]=='O' && array[3]=='O' && array[6]=='O') || (array[1]=='O' && array[4]=='O' && array[7]=='O') || (array[2]=='O' && array[5]=='O' && array[8]=='O') || (array[0]=='O' && array[4]=='O' && array[8]=='O') || (array[2]=='O' && array[4]=='O' && array[6]=='O'))
				{
					printf("\n    %c | %c | %c\n",array[0],array[1],array[2]);
					printf("    --+---+--\n");
					printf("    %c | %c | %c    P1 win !!!!!!\n",array[3],array[4],array[5]);
					printf("    --+---+--\n");
					printf("    %c | %c | %c\n",array[6],array[7],array[8]);
					//printf("\nP1 win !!!!!!\n");
					return 0;
				}
				else if((array[0]=='X' && array[1]=='X' && array[2]=='X') || (array[3]=='X' && array[4]=='X' && array[5]=='X') || (array[6]=='X' && array[7]=='X' && array[8]=='X') || (array[0]=='X' && array[3]=='X' && array[6]=='X') || (array[1]=='X' && array[4]=='X' && array[7]=='X') || (array[2]=='X' && array[5]=='X' && array[8]=='X') || (array[0]=='X' && array[4]=='X' && array[8]=='X') || (array[2]=='X' && array[4]=='X' && array[6]=='X'))
				{
					printf("\n    %c | %c | %c\n",array[0],array[1],array[2]);
					printf("    --+---+--\n");
					printf("    %c | %c | %c    P2 win !!!!!!\n",array[3],array[4],array[5]);
					printf("    --+---+--\n");
					printf("    %c | %c | %c\n",array[6],array[7],array[8]);
					//printf("\nP2 win !!!!!!\n");
					return 0;
				}
				else
				{
					if((array[0] != '1') && (array[1] != '2') && (array[2] != '3') && (array[3] != '4') && (array[4] != '5') && (array[5] != '6') && (array[6] != '7') && (array[7] != '8') && (array[8] != '9'))
					{
						printf("\n                    draw ~~~~\n");
						return 0;
					}
				}
			}
		}
		if(a == 2)
		{
			while(1)
			{
				printf("\n    %c | %c | %c\n",array[0],array[1],array[2]);
				printf("    --+---+--\n");
				printf("    %c | %c | %c    P2's turn! Please input a number from 0 to 8.\n",array[3],array[4],array[5]);
				printf("    --+---+--\n");
				printf("    %c | %c | %c\n",array[6],array[7],array[8]);
				//printf("\nP2's turn! Please input a number from 0 to 8.\n");
				scanf("%d", &P2.input);
				array[P2.input-1]='X';
				if((array[0]=='O' && array[1]=='O' && array[2]=='O') || (array[3]=='O' && array[4]=='O' && array[5]=='O') || (array[6]=='O' && array[7]=='O' && array[8]=='O') || (array[0]=='O' && array[3]=='O' && array[6]=='O') || (array[1]=='O' && array[4]=='O' && array[7]=='O') || (array[2]=='O' && array[5]=='O' && array[8]=='O') || (array[0]=='O' && array[4]=='O' && array[8]=='O') || (array[2]=='O' && array[4]=='O' && array[6]=='O'))
				{
					printf("\n    %c | %c | %c\n",array[0],array[1],array[2]);
					printf("    --+---+--\n");
					printf("    %c | %c | %c    P1 win !!!!!!\n",array[3],array[4],array[5]);
					printf("    --+---+--\n");
					printf("    %c | %c | %c\n",array[6],array[7],array[8]);
					//printf("\nP1 win !!!!!!\n");
					return 0;
				}
				else if((array[0]=='X' && array[1]=='X' && array[2]=='X') || (array[3]=='X' && array[4]=='X' && array[5]=='X') || (array[6]=='X' && array[7]=='X' && array[8]=='X') || (array[0]=='X' && array[3]=='X' && array[6]=='X') || (array[1]=='X' && array[4]=='X' && array[7]=='X') || (array[2]=='X' && array[5]=='X' && array[8]=='X') || (array[0]=='X' && array[4]=='X' && array[8]=='X') || (array[2]=='X' && array[4]=='X' && array[6]=='X'))
				{
					printf("\n    %c | %c | %c\n",array[0],array[1],array[2]);
					printf("    --+---+--\n");
					printf("    %c | %c | %c  P2 win !!!!!!\n",array[3],array[4],array[5]);
					printf("    --+---+--\n");
					printf("    %c | %c | %c\n",array[6],array[7],array[8]);
					//printf("\nP2 win !!!!!!\n");
					return 0;
				}
				else
				{
					if((array[0] != '1') && (array[1] != '2') && (array[2] != '3') && (array[3] != '4') && (array[4] != '5') && (array[5] != '6') && (array[6] != '7') && (array[7] != '8') && (array[8] != '9'))
					{
						printf("\n                    draw ~~~~\n");
						return 0;
					}
				}
				printf("\n    %c | %c | %c\n",array[0],array[1],array[2]);
				printf("    --+---+--\n");
				printf("    %c | %c | %c    P1's turn! Please input a number from 0 to 8.\n",array[3],array[4],array[5]);
				printf("    --+---+--\n");
				printf("    %c | %c | %c\n",array[6],array[7],array[8]);
				//printf("\nP1's turn! Please input a number from 0 to 8.\n");
				scanf("%d", &P1.input);
				array[P1.input-1]='O';
				if((array[0]=='O' && array[1]=='O' && array[2]=='O') || (array[3]=='O' && array[4]=='O' && array[5]=='O') || (array[6]=='O' && array[7]=='O' && array[8]=='O') || (array[0]=='O' && array[3]=='O' && array[6]=='O') || (array[1]=='O' && array[4]=='O' && array[7]=='O') || (array[2]=='O' && array[5]=='O' && array[8]=='O') || (array[0]=='O' && array[4]=='O' && array[8]=='O') || (array[2]=='O' && array[4]=='O' && array[6]=='O'))
				{
					printf("\n    %c | %c | %c\n",array[0],array[1],array[2]);
					printf("    --+---+--\n");
					printf("    %c | %c | %c    P1 win !!!!!!\n",array[3],array[4],array[5]);
					printf("    --+---+--\n");
					printf("    %c | %c | %c\n",array[6],array[7],array[8]);
					//printf("\nP1 win !!!!!!\n");
					return 0;
				}
				else if((array[0]=='X' && array[1]=='X' && array[2]=='X') || (array[3]=='X' && array[4]=='X' && array[5]=='X') || (array[6]=='X' && array[7]=='X' && array[8]=='X') || (array[0]=='X' && array[3]=='X' && array[6]=='X') || (array[1]=='X' && array[4]=='X' && array[7]=='X') || (array[2]=='X' && array[5]=='X' && array[8]=='X') || (array[0]=='X' && array[4]=='X' && array[8]=='X') || (array[2]=='X' && array[4]=='X' && array[6]=='X'))
				{
					printf("\n    %c | %c | %c\n",array[0],array[1],array[2]);
					printf("    --+---+--\n");
					printf("    %c | %c | %c    P2 win !!!!!!\n",array[3],array[4],array[5]);
					printf("    --+---+--\n");
					printf("    %c | %c | %c\n",array[6],array[7],array[8]);
					//printf("\nP2 win !!!!!!\n");
					return 0;
				}
				else
				{
					if((array[0] != '1') && (array[1] != '2') && (array[2] != '3') && (array[3] != '4') && (array[4] != '5') && (array[5] != '6') && (array[6] != '7') && (array[7] != '8') && (array[8] != '9'))
					{
						printf("\n                    draw ~~~~\n");
						return 0;
					}
				}
			}
		}
		else
		{
			printf("Fuckboy!!!!!! TYPE THE FUCKING 1 or 2!\n");
			continue;
		}
	}
	return 0;
}