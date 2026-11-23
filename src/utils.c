#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <cjson/cJSON.h>
#include "../include/utils.h"


int creer_reservation(int id_reservation, const char * const  nom_client,const char * const nom_salle_reservation, date date_debut, date date_fin, int nb_personnes, float tarif, char statut) {
// create a cJSON object
   cJSON *json = cJSON_CreateObject();
   cJSON_AddNumberToObject(json, "id_reservation", id_reservation);
   cJSON_AddStringToObject(json, "nom_client",nom_client);
   cJSON_AddStringToObject(json, "salle", nom_salle_reservation);
   char str_date_debut[20];
   char str_date_fin[20];
   sprintf(str_date_debut, "%02d-%02d-%04d", date_debut.jour, date_debut.mois, date_debut.annee);
   sprintf(str_date_fin, "%02d-%02d-%04d", date_fin.jour, date_fin.mois, date_fin.annee);
   cJSON_AddStringToObject(json, "date_debut", str_date_debut);
   cJSON_AddStringToObject(json, "date_fin", str_date_fin); 
   cJSON_AddNumberToObject(json, "nb_personnes", nb_personnes );
   cJSON_AddNumberToObject(json, "tarif", tarif);
   cJSON_AddNumberToObject(json, "statut", statut);

  

   // convert the cJSON object to a JSON string
   char *json_str = cJSON_Print(json);

   // write the JSON string to a file
   FILE *fp = fopen("data/reservations.json", "a");
   if (fp == NULL) {
       printf("Error: Unable to open the file.\n");
       return 1;
   }
   printf("%s\n", json_str);
   fputs(json_str, fp);
   fclose(fp);
   // free the JSON string and cJSON object
   cJSON_free(json_str);
   cJSON_Delete(json);
   return 0;

}
