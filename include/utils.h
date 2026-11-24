#ifndef UTILS_H
#define UTILS_H

/***
typedef struct {
  
  int heure;
  int minute;
  int secondes;

} temps ;
***/


typedef struct {
  
  int jour;
  enum mois { JANVIER =  1, FEVRIER = 2, MARS = 3, AVRIL = 4, MAI = 5, JUIN = 6, JUILLET = 7, AOUT = 8, SEPTEMBRE = 9, OCTOBRE = 10, NOVEMBRE = 11, DECEMBRE = 12} mois;
  int annee;
  int heures, minutes, secondes;

} date ;



typedef struct {
  char nom;
  int capacite;
  float tarif_horaire;
  char equipements[255];
  enum statut {LIBRE = 0, RESERVEE} statut;
  

} salle ;



typedef struct {

  int id_reservation;
  char nom_client[100];
  char nom_salle_reservation[100];
  date date_debut;
  date date_fin;
  int nb_personnes;
  float tarif;
  enum statut {EN_COURS = 1, ACHEVEE} statut;

} reservation ;

int creer_reservation(int id_reservation, const char * const nom_client, const char * const nom_salle_reservation, date date_debut, date date_fin, int nb_personnes, float tarif, char statut);
 
#endif
