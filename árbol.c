//Imprimir árbol de navidad// 

#include <stdio.h>

void arbol_navidad(){
int altura, espacios_vacios, simbolo, i, x;
  
    printf("Introduzca la altura deseada de su arbol de navidad:\n");
    scanf("%d", &altura);

    espacios_vacios = altura - 1;
    simbolo = 1;
  
  for (i = 0; i < altura; i++) {
    for (x = 0; x < espacios_vacios; x++) {
        printf(" ");
        }
       
    for (x = 0; x < simbolo; x++) {
            printf("*");
        }
        printf("\n");
       
        espacios_vacios --;
        simbolo += 2;
    }
    for (i = 0; i < altura - 1; i++) {
        printf(" ");
    }
    printf("|\n");
    for (i = 0; i < altura - 2; i++) {
        printf(" ");
    }
    printf("|||\n"); 
}  
  int main() {
      arbol_navidad();
    return 0;
}
