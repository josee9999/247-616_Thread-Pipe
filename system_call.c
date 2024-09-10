/**
 * @file system_call.c
 * 
 * @brief   Exemple de code C pour des appels systèmes 
 *          (équivalent à une commande dans un émulateur de terminal, ou un script Bash)
 * 
 * @author  Kevin Cotton
 * @date    2024-08-02
 *
 */
#include <stdlib.h>
#include <stdio.h>

/**
 * Le main écrie les commandes suivante, sur le terminal :
 * "processus 1", "sleep 10" -> qui crée un temp d'attente de 10 secondes,
 * "processus 3", "sleep 5" -> qui crée un temp d'attente de 5 secondes et "processus 5".
 * Finalement, le texte "terminé" est affiché.
 * @return     0 
 */
int main() {
  system("echo \"processus 1 \""); 
  system("sleep 10"); // processus 2
  system("echo \"processus 3 \""); 
  system("sleep 5"); // processus 4
  system("echo \"processus 5 \""); 

  printf("\n terminé \n");
  return 0;
}
