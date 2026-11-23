#ifndef utils
#define utils

/***
typedef struct {
  
  int heure;
  int minute;
  int secondes;

} temps ;
***/


typedef struct {
  
  int jour;
  enum mois {1,2,3,4,5,6,7,8,9,10,11,12};
  int annee;
  int heures, minutes, secondes;

} date ;



typedef struct {
  char nom;
  int capacite;
  float tarif_horaire;
  char equipements[255];


} salle ;



typedef struct {

  int id_reservation;
  char nom_client;
  char nom_salle_reservation;
  date date_debut;
  date date_fin;
  int nb_personnes;
  float tarif;
  enum statut {"EN COURS", "ACHEVEE"};

} reservation ;


 
#endif 
