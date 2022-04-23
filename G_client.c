#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"STRUCTURES.h"



int checkClient(int a){
FILE *F;
client c;
int i=0;
F=fopen("client.txt","r");
while(!feof(F)){
fscanf(F,"%d%s%s",&c.idClient,c.nom,c.prenom);
fscanf(F,"%d%s%d\n",&c.cin,c.adresse,&c.telephone);
if(c.idClient==a){i=1;break;}
}
if(i==0){printf("\nce client n'existe pas");}
fclose(F);
return i;}

void afficheClient(){
FILE *F;
client c;
F=fopen("client.txt","r");

printf("idClient nom  prenom    cin    adresse  telephone\n");

while(!feof(F)){
//lire a tarvers le fichier
fscanf(F,"%d%s%s",&c.idClient,c.nom,c.prenom);
fscanf(F,"%d%s%d\n",&c.cin,c.adresse,&c.telephone);

//afficher les info des clients
printf("%d\t%s\t%s\t",c.idClient,c.nom,c.prenom);
printf("%d\t%s\t%d\n",c.cin,c.adresse,c.telephone);
}
fclose(F);
menu();}

client infoClient(){
client x;
printf("saisir idClient: ");scanf("%d",&x.idClient);
printf("saisir le nom: ");scanf("%s",x.nom);
printf("saisir le prenom: ");scanf("%s",x.prenom);
printf("saisir le cin: ");scanf("%d",&x.cin);
printf("saisir l'adresse: ");scanf("%s",x.adresse);
printf("saisir le telephone: ");scanf("%d",&x.telephone);

return x;}

void suppClient(){
int x;
printf("saisir le id du client pour le supprimer: ");
scanf("%d",&x);
if(checkClient  (x)){
FILE *F,*F1;
client c;
F=fopen("client.txt","r");
F1=fopen("file.txt","w");
while(!feof(F)){
fscanf(F,"%d%s%s",&c.idClient,c.nom,c.prenom);
fscanf(F,"%d%s%d\n",&c.cin,c.adresse,&c.telephone);
if(x!=c.idClient){
fprintf(F1,"%d\t%s\t%s\t",c.idClient,c.nom,c.prenom);
fprintf(F1,"%d\t%s\t%d\n",c.cin,c.adresse,c.telephone);
}
}
fclose(F);
fclose(F1);
remove("client.txt");
rename("file.txt","client.txt");
printf("la supprition est bien fait\n");}
menu();
}

void modifierClient(){
FILE *F,*F1;
client c;
int x;
printf("saisir le idClient: ");
scanf("%d",&x);
if(checkClient(x)){
F=fopen("client.txt","r");
F1=fopen("file.txt","w");
while(!feof(F)){
fscanf(F,"%d%s%s",&c.idClient,c.nom,c.prenom);
fscanf(F,"%d%s%d\n",&c.cin,c.adresse,&c.telephone);
if(c.idClient==x){
printf("pour modifier ce client\n");
c=infoClient();
}
fprintf(F1,"%d\t%s\t%s\t",c.idClient,c.nom,c.prenom);
fprintf(F1,"%d\t%s\t%d\n",c.cin,c.adresse,c.telephone);
}
fclose(F);
fclose(F1);
remove("client.txt");
rename("file.txt","client.txt");
printf("la modufication est bien fait");
menu();
}
menu();}

void ajouterClient(){
FILE *F;
client c;
F=fopen("client.txt","a");
c=infoClient();
fprintf(F,"%d\t%s\t%s\t",c.idClient,c.nom,c.prenom);
fprintf(F,"%d\t%s\t%d\n",c.cin,c.adresse,c.telephone);
fclose(F);
printf("le client est  ajouter\n");
menu();}






void Gestion_Client(){
int x,a,i=0,y;
float nb;
contrat con;
client cl,c;
voiture v;
FILE *F,*F1;



do{
	printf("\n                             \xda\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xbf");
	printf("\n                             \xb3 Gestion client  \xb3");
	printf("\n                             \xc0\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xd9");

	printf("\n\n");

	printf("\n               \xc9\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb");
	printf("\n               \xba                                              \xba");
	printf("\n               \xba    liste des clients.....................1   \xba");
	printf("\n               \xba    ajouter client........................2   \xba");
	printf("\n               \xba    modifier client.......................3   \xba");
	printf("\n               \xba    supprimer client......................4   \xba");
	printf("\n               \xba    Retour................................5   \xba");
	printf("\n               \xba                                              \xba");
	printf("\n               \xba                                              \xba");
	printf("\n               \xc8\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc");
	printf("\n\n                                Votre choix  :  ");

scanf("%d",&x);
}while(x<=0||x>5);

switch(x){
case 1:
 afficheClient();
break;

case 2:
 ajouterClient();
break;

case 3:
 modifierClient();
break;

case 4:
 suppClient();
break;

case 5:

break;

default:
printf("error!");
break;
}
}


main(){
Gestion_Client();
}




void menu(){
char b;

printf("\n\n               ================================================\n");
printf("               ________________________________________________\n");
printf("\n                voulez vous retourner au menu?(Oui/Non) \n");
printf("               ________________________________________________\n\n");
scanf("%c",&b);
while(b!='O' && b!='N'){
printf("                   taper O pour Oui et N pour Non!: ");
scanf("%c",&b);
}
if(b=='O'){Gestion_Client();}
}
