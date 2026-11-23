#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <cjson/cJSON.h>
#include "../include/utils.h"


void creer_reservation(int id_reservation, char nom_client, char salle_reservation, date date_debut, date date_fin, int nb_personnes, float tarif, char statut) {
// create a cJSON object
   cJSON *json = cJSON_CreateObject();
   cJSON_AddNumberToObject(json, "id_reservation", id_reservation);
   cJSON_AddStringToObject(json, "nom_client", nom_client);
   cJSON_AddNumberToObject(json, "salle", salle_reservation);
   char str_jour_debut, str_mois_debut, str_annee_debut, str_jour_fin, str_mois_fin, str_annee_fin; 
   cJSON_AddStringToObject(json, "date_debut", sprintf(str_date_debut, "%d", date_debut.jour) +"-"+ sprintf(str_mois_debut,"%d",date_debut.mois) +"-"+ sprintf(str_date_debut, "%d", date_debut.annee)); 
   cJSON_AddStringToObject(json, "date_debut", sprintf(str_date_fin, "%d", date_fin.jour) +"-"+ sprintf(str_mois_fin,"%d",date_fin.mois) +"-"+ sprintf(str_date_fin, "%d", date_fin.annee));
   cJSON_AddNumberToObject(json, "nb_personnes", nb_personnes );
   cJSON_AddNumberToObject(json, "tarif", tarif);
   cJSON_AddNumberToObject(json, "statut", statut);

  

   // convert the cJSON object to a JSON string
   char *json_str = cJSON_Print(json);

   // write the JSON string to a file
   FILE *fp = fopen("data/reservations.json", "w");
   if (fp == NULL) {
       printf("Error: Unable to open the file.\n");
       return 1;
   }
   printf("%s\n", json_str);
   fputs(json_str, fp);
   fclose
   // free the JSON string and cJSON object
   cJSON_free(json_str);
   cJSON_Delete(json);
   return 0;

}
