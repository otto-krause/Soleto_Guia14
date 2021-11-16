#include <stdio.h>
void mostrar(int ** x){
  printf("\t1er T\t2do T\t3er T");
  for(int i = 0; i < 100; i++){
    printf("%d:\t", i);
    for (int f = 0; f < 3; f++){
      printf("%d\t", a[f][i]);
    }
    putchar('\n');
  }
}
int main(){
  int a[3][100];
  for(int i = 0; i < 3; i++){
    for (int f = 0; f < 100; f++){
      printf("ingrese la nota del alumno %d en el trimestre %d: ", f+1, i+1);
      scanf("%d", &a[i][f]);
    }
  }
  mostrar(a);
  char resp[2];
  for(;;){
    printf("desea cambiar un dato?");
    scanf("%s", &resp);
    if(resp == "SI" || resp == "si"){
      printf("incerte el numero de legajo del alumno, el trimestre a corregir y la nueva nota: ");
      int t,a,n;
      scanf("%d %d %d", &a, &t, &n);
      a[t][a] = n;
      mostrar(a);
    }
    else
      break;
  }
  return 0;
}
