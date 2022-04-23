#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"STRUCTURES.h"





 int checkVoiture(int b){
FILE *F;
voiture v1 ;
int i=0;
F=fopen("voitures.txt","r");

while(!feof(F)){
fscanf(F,"%d : %s : %s : %s : ",&v1.idVoiture,v1.marque,v1.nom,v1.couleur);
fscanf(F,"%d : %d : %s\n",&v1.nbplaces,&v1.prixJour,v1.EnLocation);

if(v1.idVoiture==b){
    i=1;
    break;
      }
}
if(i==0){printf("\nCette voiture n'existe pas");}
fclose(F);
return i;}

void affichVoitures(){
FILE *F;
voiture v1;
F=fopen("voitures.txt","r");

printf(" idVoiture  marque couleur nbplaces prixJour EnLocation \n");

while(!feof(F)){
//lire a tarvers le fichier
fscanf(F,"%d  :  %s :  %s :   %s : ",&v1.idVoiture,v1.marque,v1.nom,v1.couleur);
fscanf(F," %d :  %d   :  %s\n",&v1.nbplaces,&v1.prixJour,v1.EnLocation);
//afficher les info des voitures

printf(" %d       :  %s :  %s :  %s : ",v1.idVoiture,v1.marque,v1.nom,v1.couleur);
printf(" %d      : %d  :   %s\n",v1.nbplaces,v1.prixJour,v1.EnLocation);
}
fclose(F);
menu();
}

voiture infoVoiture (){
voiture x;
printf("saisir idvoitures: ");scanf("%d",&x.idVoiture);
printf("saisir le nom: ");scanf("%s",x.nom);
printf("saisir la marque: ");scanf("%s",x.marque);
printf("saisir la coleur: ");scanf("%s",x.couleur);
printf("saisir le nombre de places: ");scanf("%d",&x.nbplaces);
printf("saisir le prix du jour: ");scanf("%d",&x.prixJour);
printf("En locaton: ");scanf("%s", x.EnLocation);

return x;}

void suppVoiture(){
int x;
printf("saisir le id du voitures pour le supprimer: ");
scanf("%d",&x);
if(checkVoiture(x)){
FILE *F,*F2;
voiture v1;
F=fopen("voitures.txt","r");
F2=fopen("file2.txt","w");
while(!feof(F)){

fscanf(F,"%d : %s : %s : %s : ",&v1.idVoiture,v1.marque,v1.nom,v1.couleur);
fscanf(F,"%d : %d : %s\n",&v1.nbplaces,&v1.prixJour,v1.EnLocation);

if(x!=v1.idVoiture){
fprintf(F2,"%d : %s : %s : %s : ",v1.idVoiture,v1.marque,v1.nom,v1.couleur);
fprintf(F2,"%d : %d : %s\n",v1.nbplaces,v1.prixJour,v1.EnLocation);
}

}
fclose(F);
fclose(F2);
remove("voitures.txt");
rename("file2.txt","voitures.txt");
printf("la supprition est bien fait\n");}
menu();
}

void modifierVoiture(){
FILE *F,*F2;
voiture v1, v2;
int x;
printf("saisir le idVoiture: ");
scanf("%d",&x);

if(checkVoiture(x)){
F=fopen("voitures.txt","r");
F2=fopen("file2.txt","w");

printf("pour modifier cette voiture\n");
v2=infoVoiture();

while(!feof(F)){

fscanf(F,"%d : %s : %s : %s : ",&v1.idVoiture,v1.marque,v1.nom,v1.couleur);
fscanf(F,"%d : %d : %s\n",&v1.nbplaces,&v1.prixJour,v1.EnLocation);

if(v1.idVoiture==x){
fprintf(F2,"%d : %s : %s : %s : ",v2.idVoiture,v2.marque,v2.nom,v2.couleur);
fprintf(F2,"%d : %d : %s\n",v2.nbplaces,v2.prixJour,v2.EnLocation);
}

else{
fprintf(F2,"%d : %s : %s : %s : ",v1.idVoiture,v1.marque,v1.nom,v1.couleur);
fprintf(F2,"%d : %d : %s\n",v1.nbplaces,v1.prixJour,v1.EnLocation);
}

}

fclose(F);
fclose(F2);
remove("voitures.txt");
rename("file2.txt","voitures.txt");
printf("la modufication est bien faite");
menu();
}

menu();}



void ajouterVoiture(){
FILE *F;
voiture v1 ;
F=fopen("voitures.txt","a");
v1=infoVoiture();
fprintf(F,"%d : %s : %s : %s : ",v1.idVoiture,v1.marque,v1.nom,v1.couleur);
fprintf(F,"%d : %d : %s\n",v1.nbplaces,v1.prixJour,v1.EnLocation);

fclose(F);
printf("la voiture est bien ajouter");
menu();}

void Gestion_Voitures (){
int x,b,i=0,y;
float nb;
contrat con;
client cl,c;
voiture v1;
FILE *F,*F2;

do{

printf("\n                               \xda\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xbf");
	printf("\n                               \xb3 Menu Principale \xb3");
	printf("\n                               \xc0\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xd9");

	printf("\n\n");

	printf("\n               \xc9\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb");
	printf("\n               \xba                                              \xba");
	printf("\n               \xba    Liste des voitures....................1   \xba");
	printf("\n               \xba    ajouter voiture.......................2   \xba");
	printf("\n               \xba    modifier voiture......................3   \xba");
	printf("\n               \xba    supprimer voiture.....................4   \xba");
	printf("\n               \xba    retour................................5   \xba");
	printf("\n               \xba                                              \xba");
	printf("\n               \xc8\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc");
	printf("\n\n                                Votre choix  :  ");
scanf("%d",&x);


switch(x){
case 1:
 affichVoitures();
break;

case 2:
 ajouterVoiture();
break;

case 3:
modifierVoiture();
break;

case 4:
 suppVoiture();
break;

default:
printf("erreur!");
break;
}
}while(x<=0||x>5);

}


int main(){
Gestion_Voitures();
return 0;
}

void menu(){
char b;
printf("\n\n             ================================================\n");
printf("             ________________________________________________\n");
printf("\n                voulez vous retourner au menu?(Oui/Non) \n");
printf("             ________________________________________________\n\n");
scanf("%c",&b);
while(b!='O' && b!='N'){
printf("                  taper O pour oui et N pour non!: ");
scanf("%c",&b);
}
if(b=='O'){Gestion_Voitures();
}
}


