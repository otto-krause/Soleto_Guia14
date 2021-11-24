#include <stdio.h>
void mostrar(int g, int h, int x[g][h]){
    printf("\t1er T\t2do T\t3er T\tPromedio");
    int p;
    for(int i = 0; i < h; i++){
        p=0;
        printf("%d :\t", i);
        for (int f = 0; f < g; f++){
            printf("%d\t", x[f][i]);
            p+=x[f][i];
        }
        printf("%d", p/3);
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
    mostrar(3, 100, a);
    char resp[3];
    for(;;){
        printf("desea cambiar un dato?");
        scanf("%s", resp);
        if(resp[0] == 'S' || resp[0] == 's'){
            printf("incerte el numero de legajo del alumno, el trimestre a corregir y la nueva nota: ");
            int t,v,n;
            scanf("%d %d %d", &v, &t, &n);
            a[t][v] = n;
            mostrar(3, 100, a);
        }
        else
            break;
    }
        
    return 0;
}
