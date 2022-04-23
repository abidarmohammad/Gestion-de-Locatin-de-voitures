
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "STRUCTURES.h"



/* =============visualiser contrat=============== */


 void visualiserContrat(FILE *F3 , int *num) {
contrat contrat ;
int find=0;

printf("Donnez le numero du contrat : ");
scanf("%d",&num);
 fseek(F3, 0, SEEK_SET);
while (fread(&contrat, sizeof(contrat), 1, F3) != 0 && find==0) {
if ((int)contrat.numcontrat == (int)num) {find = 1 ; break ; }
  }

if (find == 0)  printf(" contrat est introuvable \n");

else {
fseek(F3,-(sizeof contrat),SEEK_CUR) ;

printf("le numero du contrat :........ ........: %d\n",contrat.numContrat  );
printf("idvoiture du contrat :.............: %d\n",contrat.idVoiture  );
printf("idclient de contrat :................: %d\n",contrat.idClient  );
printf("date de debu du contrat : .....: %d %d %d\n",contrat.debut.dd , contrat.debut.mm , contrat.debut.yy  );
printf("date de fin du contrat : .....: %d %d %d\n",contrat.fin.dd , contrat.fin.mm , contrat.fin.yy  );
printf(" le cout du contrat : .....: %d\n",contrat.Cout  );
}

 fseek(F3, 0, SEEK_SET);  main();
}


/* =============louer contrat=============== */

void louerContrat(){



      //pas fini




}

/* =============suprimer contrat=============== */


void supprimerContrat(FILE *F4 ,FILE *F5 , int *num){



FILE* file4 = fopen("file3.txt","wb+");
contrat contrat ;
voiture voiture ;
  int find2=0;

int find = 0;
char test;


fseek(F4 , 0, SEEK_SET);

while (fread(&voiture, sizeof(voiture), 1, F4) != 0 && find==0) {
if (strcmp((voiture.EnLocation), "Non" ) == 0 )
      {


while (fread(&contrat, sizeof(contrat), 1, F5) != 0 && trouve2==0){
            fseek(F5, 0, SEEK_SET);


if(contrat.numContrat == num )
    	{
fseek(F32,-(sizeof contrat),SEEK_CUR) ;
fwrite(&contrat,sizeof( contrat),1,temp);
		}
else
		{
fwrite(&contrat,sizeof( contrat),1,temp);
		}

fclose(F5);
remove(F5);
rename("file3.txt" , "Voitures.txt");
fclose(temp);
          }
if(find2==0) {
printf("_______cette voiture n'est pas valable_______\n");
main();
          }

find =1;
	  }
  }
  if (find == 0) {
printf("_______Cette contrat n'existe pas________\n");
  }

fseek(F31, 0, SEEK_SET);   fseek(F5, 0, SEEK_SET);

}



/* =============modifier contrat=============== */


void modifierContrat(FILE *F3 ,int *num){

contrat contrat ;
int find = 0;
char test;
printf("Donnez le id : ");
scanf("%d",&num);
fseek(F3, 0, SEEK_SET);
while (fread(&contrat, sizeof(contrat), 1, F3) != 0 && find==0) {
    if (contrat.numContrat == num) {find = 1 ; break ; }
  }

    if (find == 0)  printf("________Cette contrat n'existe pas_____\n");

    else {
fseek(F3,-(sizeof contrat),SEEK_CUR) ;
printf("ancienne date debut ........ ........: %d %d %d\n",contrat.debut.dd , contrat.debut.mm , contrat.debut.yy  );
printf("ancienne date fin .............: %d %d %d\n",contrat.fin.dd , contrat.fin.mm , contrat.fin.yy  );

printf("\n\n _________qu'est ce que tu veux changer _________? \n \n ");
contrat.numContrat = contrat.numContrat ;
printf("debut ? : (o/n) \t ") ; scanf("%s",&test) ;  if(test == 'o') scanf("%d %d %d",&contrat.debut.dd,&contrat.debut.mm,&contrat.debut.yy) ; else { contrat.debut = contrat.debut  ; printf("\n"); }
printf("fin ? : (o/n) \t ") ; scanf("%s",&test) ;  if(test == 'o') scanf("%d %d %d",&contrat.fin.dd,&contrat.fin.mm,&contrat.fin.yy) ; else contrat.fin = contrat.fin ; printf("\n");
contrat.Cout = contrat.Cout ;
contrat.idClient = contrat.idClient ;
contrat.idVoiture = contrat.idVoiture ;
fwrite(&contrat,sizeof contrat,1,F3);
      }
fseek(F3, 0, SEEK_SET);  main();

}



/* =============retourner contrat=============== */

 void retournerVoiture(FILE* F3 ,FILE *F5 ,  int *num){
     voiture voiture ;
     contrat contrat ;
     int find=0;
}
 printf("num de contrat ") ;
 if(strcmp(voiture.EnLocation,"Non")==0 ){
 fseek(F3, 0, SEEK_SET);
  while (fread(&contrat, sizeof(contrat), 1, F3) != 0 && find==0) {
    if (contrat.numContrat == num)
      {
supprimer(F3 , F32 , num) ;
	  }
  }
  if (find == 0) {
printf("Ce nom n'existe pas\n");
  }
 }

fseek(F3, 0, SEEK_SET);    fseek(F32, 0, SEEK_SET);    main();

}


/* =============menu de location d une voiture =============== */

int main()
{

    int num ;

    FILE *contracts

    contracts = fopen ("ContratsLocations.txt", "rb+");

    int choix;

int Gestion_Location()
{
    int choix  ;
    do
    {
      printf("\n                             \xda\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xbf");
	printf("\n                                  \xb3 Gestion d une voiture  \xb3");
	printf("\n                             \xc0\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xd9");

	printf("\n\n");

	printf("\n               \xc9\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb");
	printf("\n               \xba                                              \xba");
	printf("\n               \xba    visualiser contrat....................1   \xba");
	printf("\n               \xba    louer voiture.........................2   \xba");
	printf("\n               \xba    retourner voiture.....................3   \xba");
	printf("\n               \xba    modifier contrat......................4   \xba");
	printf("\n               \xba    supprimer contrat.....................5   \xba");
	printf("\n               \xba    Retour................................6   \xba");
	printf("\n               \xba                                              \xba");
	printf("\n               \xba                                              \xba");
	printf("\n               \xc8\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc");
	printf("\n\n                                Votre choix  :  ");

        printf("\n\n                Votre choix : ");
        scanf("%d",&choix);
        printf("\n\n");
    }
    while( choix<=0|| choix>6);
    printf("            ======================================================\n\n");
    if(choix==6) main();
  else return choix;
 switch (choix){

        case 1 : visualiserContrat();
                      break ;
        case 2 : louerVoiture() ;
                       break ;
        case 3 : retournerVoiture();
                       break ;
        case 4 : modifierContrat();
                       break ;
        case 5 : supprimerContrat();
                       break ;





