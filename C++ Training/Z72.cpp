#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define MAX_CHARACTER 250

int main(){
   FILE *r_file = fopen("main.c", "r");
   if (!r_file){
      printf("Greška u otvaranju datoteke citanja!\n");
      return -1;
   }
   FILE *w_file = fopen("ispis.txt", "w");
   if (!w_file){
      printf("Greška u otvaranju datoteke upisivanja!\n");
      fclose(r_file);
      return -1;
   }

   char line[MAX_CHARACTER];

   while (fgets(line, MAX_CHARACTER, r_file) != NULL){
      if (line[0] == '\n' || (line[0] == '/' && line[1] == '/'))   //ako linija pocinje novim redom ili ako su prva dva znaka za ispis komentara, preskoci ovu liniju
         continue;


      else if (isspace(line[0])){ // ako linija počinje prazninom, provjera da li je cijela prazna, zapocinje znakovima komentara ili znakom razlicitim od praznine
         for (char *c = line + 1; *c != '\0'; c++){
            if (*c == '/')
               if (*(c + 1) == '/')
                  break;

            if (!isspace(*c)){
               fputs(line, w_file);
               break;
            }
         }
      }

      else
         fputs(line, w_file);

   }

   fclose(r_file);
   fclose(w_file);

   getchar();
   getchar();
   return 0;
}
