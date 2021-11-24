#include <stdio.h>
int main(){
    int a[20][6];
    for(int i = 0; i<20; i++){
        for(int f = 0; f<6; f++){
            printf("ingrese los habitantes del departamento %d en el piso %d: ", f+1,i+1);
            scanf("%d", &a[i][f]);
        }
    }
    int p,t =0;
    for(int i = 0; i<20; i++){
        p=0;
        for(int f = 0; f<6; f++){
            p+=a[i][f];
            t+=a[i][f];
        }
        printf("el promedio de habitandes de los departamentos del piso %d es %d",i+1, p);
    }
    printf("el total es %d, el promedio por piso es %d", t, t/20);
}
