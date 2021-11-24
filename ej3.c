#include <stdio.h>

int main(){
  int t = 0;
  int a[2][3];
  for(int i = 0; i < 2; i++){
    for (int f = 0; f < 3; f++){
      printf("ingrese el valor de la fila %d y la columna %d: ", i+1, f+1);
      scanf("%d", &a[i][f]);
    }
  }
  for(int i = 0; i < 3; i++){
    a[0][i] *= 4;
  }
  for(int i = 0; i < 2; i++){
    a[i][2] *= 3;
  }
  int m = a[0][0];
  for(int i = 0; i < 2; i++){
    for (int f = 0; f < 3; f++){
      printf("%d\t", a[i][f]);
      if (a[i][f] < m){
	m = a[i][f];
      }
      t+= a[i][f];
    }
    putchar('\n');
  }
  printf("el menor es %d, el total es %d\n", m, t);
  return 0;
}
