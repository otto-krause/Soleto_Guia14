#include <stdio.h>

int main(){
  int t = 0, tl = 0;
  int a[3][12];
  for(int i = 0; i < 3; i++){//No conozco la cantidad de veces que se repite ni el orden de ingreso.
    for (int f = 0; f < 12; f++){
      printf("ingrese la recaudacion del colectivo %d de la linea %d: ", f+1, i+1);
      scanf("%d", &a[i][f]);
    }
  }
  for(int i = 0; i < 3; i++){
    tl = 0;
    for (int f = 0; f < 12; f++){
      printf("el colectivo %d de la linea %d es %d\n",f, i, a[i][f]);
      t+= a[i][f];
      tl+= a[i][f];
    }
    printf("la recaudacion total de la linea %d es: %d\n", i, tl);
  }
  printf("la recaudacion total es %d\n", t);
  return 0;
}
