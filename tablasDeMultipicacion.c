#include<stdio.h>
void tablas_multiplicacion(){
int i, x;    
  
    printf("Se mostraran las tablas de multiplicar del 1 al 10:\n");
 
      for(i=1; i<=10; i++){
        for(x=1; x<=10; x++){
            int multiplicacion= i * x;
            printf("%d * %d = %d\n", i, x, multiplicacion);
        }   
    } 
}
int main(){

    tablas_multiplicacion();
}
