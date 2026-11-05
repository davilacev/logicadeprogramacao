
#include<stdio.h>
#define LIN 3
#define COL 3
int main(){
   int matriz[LIN][COL];
   int somadiagonal;
   int soma = 0;
   for(int i = 0; i < LIN; i++){
    for(int j = 0; j < COL; j++){
        printf("Digiteo elemento [%d][%d]: ", i, j);
        scanf("%d", &matriz[i][j]);
        soma += matriz[i][j];
    }
   }
   printf("Soma de todos os elementos: %d\n", soma);
  //somar linhas das matrizes
        for(int i =0; i < LIN; i++){
            int somalinha = 0;
            for(int j = 0; j < COL; j++ ){
                somalinha += matriz[i][j];
            }
            printf("Soma da linha %d: %d\n", i , somalinha);
        }
        //soma linha diagonal
  for(int i = 0; i < LIN; i++){
    for(int j = 0; j < COL; j++){
        if(i == j){
            printf("%d", matriz[i][j]);
            somadiagonal += matriz[i][j];
        }
    }
  }
  printf("\n soma da diagonal principal: %d\n", somadiagonal);

return 0;
}
