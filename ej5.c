#include <stdio.h>
const int CANT = 100;
void mostrar(int g, int h, int x[g][h]){
    printf("\t1er T\t2do T\t3er T\tPromedio\n");
    int p;
    for(int i = 0; i < h; i++){
        p=0;
        printf("%d :\t", i+1);
        for (int f = 0; f < g; f++){
            printf("%d\t", x[f][i]);
            p+=x[f][i];
        }
        printf("%d", p/3);
        putchar('\n');
    }
}
int main(){
    int a[3][CANT];
    for(int i = 0; i < 3; i++){
        for (int f = 0; f < CANT; f++){
            printf("ingrese la nota del alumno %d en el trimestre %d: ", f+1, i+1);
            scanf("%d", &a[i][f]);
        }
    }
    mostrar(3, CANT, a);
    char resp[3];
    for(;;){
        printf("desea cambiar un dato?");
        scanf("%s", resp);
        if(resp[0] == 'S' || resp[0] == 's'){
            printf("incerte el numero de legajo del alumno, el trimestre a corregir y la nueva nota: ");
            int t,v,n;
            scanf("%d %d %d", &v, &t, &n);
            a[t-1][v-1] = n;
            mostrar(3, 4, a);
        }
        else
            break;
    }
        
    return 0;
}
