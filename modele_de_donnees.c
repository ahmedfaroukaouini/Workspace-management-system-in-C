#ifndef utils
#define utils

typedef struct {
  
}

typedef struct {

  int id_reservation;
  char nom_client[255];
  int salle;
  date date_debut;
  date date_fin;
  int nb_personnes;
  float tarif;
  enum statut {"LIBRE", "RESERVEE"};

} date ;


 
#endif /* ifndef utils
#define utils */
