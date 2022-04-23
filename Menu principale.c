#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#include"G_client.h"
#include"G_voitures-1.h"


int main()
{	printf("\n                               \xda\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xbf");
	printf("\n                               \xb3 Menu Principale \xb3");
	printf("\n                               \xc0\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xd9");

	printf("\n\n");

	printf("\n               \xc9\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb");
	printf("\n               \xba                                              \xba");
	printf("\n               \xba    Location..............................1   \xba");
	printf("\n               \xba    Gestion voitures......................2   \xba");
	printf("\n               \xba    Gestion clients.......................3   \xba");
	printf("\n               \xba    Quitter...............................9   \xba");
	printf("\n               \xba                                              \xba");
	printf("\n               \xc8\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc");
	printf("\n\n                                Votre choix  :  ");

	scanf("%d",&choix);

        printf("\n\n");
    }
    while(choix<1 || choix>4);
    printf("      ========================================\n");
    if(choix==4)
    {
        printf("      Merci d'avoir utiliser notre service :)\n");
        printf("      ========================================\n\n");
        exit(1);
    }
    else
    switch(choix){
        case 1 :Gestion_location();
        break;
        }
        case 2 :Gestion_Voitures();
          break;
          }
          break ;
        case 3 :Gestion_Client();
          break;
        case 4:
            printf("      Merci d'avoir utiliser notre service :)\n");
        printf("      ========================================\n\n");
        exit(1);

          }
    }



    return 0;
}




