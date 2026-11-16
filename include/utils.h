#ifndef utils
#define utils


typedef struct {
  
  int heure;
  int minute;
  int secondes;

} temps ;



typedef struct {
  
  int jour;
  enum mois {"JANVIER","FEVRIER","MARS","AVRIL","MAI","JUIN","JUILLET","AOUT","SEPTEMBRE","OCTOBRE","NOVEMBRE","DECEMBRE"};
  temps temps_debut;

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
  salle salle_reservation;
  date date_debut;
  date date_fin;
  int nb_personnes;
  float tarif;
  enum statut {"LIBRE", "RESERVEE"};

} reservation ;


 
#endif /* ifndef utils
#define utils */
