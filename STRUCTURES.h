typedef struct contratLocation
{
 float numContrat;
 int idVoiture;
 int idClient;
 char debut[11];
 char fin[11];
 int cout;
}contrat;


typedef struct Client
{
 int idClient;
 char nom[20];
 char prenom[20];
 int cin;
 char adresse[15];
 int telephone;
}client;

typedef struct Voiture
{
 int idVoiture;
 char marque[15];
 char nom[15];
 char couleur[7];
 int nbplaces;
 int prixJour;
 char EnLocation[4];
}voiture;


