#include <stdio.h> 

int main() { 

  double a[3][3], sum1 = 0, sum2 = 0; 
                                     
  int i, j;                      

  printf("Vvedite 9 chisel dlya massiva double:\n"); 
  for (i = 0; i < 3; i++)                    
    for (j = 0; j < 3; j++)                   
      scanf("%lf", &a[i][j]);                  

  for (i = 0; i < 3; i++) {                    
    sum1 += a[i][i];                            
    sum2 += a[i][2 - i];                        
  }

  printf("Sum glav diag: %.2lf\n", sum1); 
  printf("Sum vtor diag: %.2lf\n", sum2);  

  int b[2][2], c[2][2];           
                                     
                                      
  printf("\nVvedite 4 chisla dlya vassiva int:\n");
  for (i = 0; i < 2; i++)                     
    for (j = 0; j < 2; j++)                   
      scanf("%d", &b[i][j]);                  

  c[0][0] = b[0][0] * b[0][0] + b[0][1] * b[1][0]; 
  c[0][1] = b[0][0] * b[0][1] + b[0][1] * b[1][1]; 
  c[1][0] = b[1][0] * b[0][0] + b[1][1] * b[1][0];
  c[1][1] = b[1][0] * b[0][1] + b[1][1] * b[1][1]; 

  printf("\nKvadrat matr:\n");       
  for (i = 0; i < 2; i++) {                     
    for (j = 0; j < 2; j++) {                  
      printf("%d ", c[i][j]);                   
    }
    printf("\n");                             
  }

  return 0; 
}

