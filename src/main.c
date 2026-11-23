#include <stdio.h>
#include <stdlib.h>
#include <ncurses.h>
#include "utils.c"

int main() {

  reservation R1;
  R1.id_reservation = 1;
  printf("Donnez le nom du client >>>  ");
  scanf("%s", &R1.nom_client);
  R1.nom_salle_reservation = "AVICENNE";
  R1.date_debut.jour = 15;
  R1.date_debut.mois = 3;
  R1.date_debut.annee = 2017;
  R1.date_debut.heures = 20;
  R1.date_debut.minutes = 56;
  R1.date_debut.secondes = 23;
  R1.date_fin.jour = 16;
  R1.date_fin.mois = 3;
  R1.date_fin.annee = 2017;
  R1.date_fin.heures = 20;
  R1.date_fin.minutes = 56;
  R1.date_fin.secondes = 23;
  R1.nb_personnes = 25;
  R1.tarif = 1520;
  R1.statut = "EN COURS";
}
