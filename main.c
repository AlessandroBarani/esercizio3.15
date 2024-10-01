#include <stdio.h>
int main() {
    char categoria;
    float costo;
    float costo_finale;
    printf("Di quale categoria fai parte(P/S/D): ");
    scanf("%c", &categoria);
    if(categoria != 'P' && categoria != 'S' && categoria != 'D'){
        printf("Inserire una categoria valida tra: P,D,S");
    }else {
        printf("Inserire il prezzo del biglietto: ");
        scanf("%f", &costo);
        if(categoria=='P'){
            costo_finale = costo-costo*.1;
            printf("Costo finale:%.2f€",costo_finale);
        }else if(categoria=='S'){
            costo_finale = costo-costo*.15;
            printf("Costo finale:%.2f€", costo_finale);
        }else if(categoria=='D') {
            costo_finale = costo-costo*.25;
            printf("Costo finale: %.2f€\n", costo_finale);
        }
    }
    return 0;
}

