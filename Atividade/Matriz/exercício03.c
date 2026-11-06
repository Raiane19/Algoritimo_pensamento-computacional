#include <stdio.h>

int main()
{
    int mat[3][3];
    int i, j;
    
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            printf("Digite mat[%d][%d]:" ,i,j);
            scanf("%d", &mat[i][j]);
        }
        printf("\n");
    }   
    
    
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            printf("%d", mat[i][j]);
        }
        printf("\n");
    }   


    return 0;
}
