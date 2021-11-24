#include <stdio.h>
const int COL = 12;
void mostrar(int r, int c, int g[r][c]){
    printf("C\tLinea 1\tLinea 2\tLinea 3\n");
    for(int i = 0; i < c; i++){
        printf("%d:\t", i+1);
        for(int f = 0; f < r; f++){
            printf("%d\t", g[r][c]);
        }
        putchar('\n');
    }
}
int main(){
  int t = 0, tl = 0;
  int a[3][COL];
  for(int i = 0; i < 3; i++){
      for (int f = 0; i < COL; i++){
          a[i][f] = 0;
      }
  }
  printf("ingrese el número de linea, el número de coche y su recaudación\n");
  for(;;){//No conozco la cantidad de veces que se repite ni el orden de ingreso.
          int j, k, l;
          scanf("%d %d %d", &j, &k, &l);
          if((j > 3 || j < 1) || (k > COL || k < 1))
              continue;
          a[j-1][k-1] = l;
          mostrar(3, COL, a);
          printf("desea ingresar otro? ");
          char y;
          scanf("%c", &y);
          if (y == 's')
              continue;
          else
              break;
  }
  for(int i = 0; i < 3; i++){
    tl = 0;
    for (int f = 0; f < COL; f++){
      printf("el colectivo %d de la linea %d es %d\n",f, i, a[i][f]);
      t+= a[i][f];
      tl+= a[i][f];
    }
    printf("la recaudacion total de la linea %d es: %d\n", i, tl);
  }
  printf("la recaudacion total es %d\n", t);
  return 0;
}
