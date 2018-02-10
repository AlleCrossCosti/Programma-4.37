#include <stdio.h>

int main () {
  
  int vettore[3] = {3,9};
  
  vettore[2] = vettore[0] + vettore[1];
  
  printf("Risultato: %d", vettore[2]);
  
  return 0;
  
  }
