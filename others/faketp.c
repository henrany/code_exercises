#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define max 1000

int main(){
    int n,input =0;
    int sum=0;
    int mat[max][max],mat1[max][max],mat2[max][max],mat3[max][max];
    int max1=0;
   // printf("enter the number the dimension of the matrix: ");
    scanf("%d",&n);
    //printf("enter the matrix values : \n");
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            //printf("[%d]  [%d] ",i,j);
            scanf("%d", &mat[i][j]);
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            sum =0;
            for(int k=0;k<n;k++){
                sum+=mat[i][k];
            }
            input = sum-mat[i][j];
            mat1[i][j] = input; 
        }
    }

    for(int j=0;j<n;j++){
        for(int i=0;i<n;i++){
            sum =0;
            for(int k=0;k<n;k++){
                sum+=mat[k][j];
            }
            input = sum-mat[i][j];
            mat2[i][j] = input; 
        }
    }

    for(int j=0;j<n;j++){
        for(int i=0;i<n;i++){
            mat3[i][j] = mat1[i][j] + mat2[i][j];
        }
    }

    for(int j=0;j<n;j++){
        for(int i=0;i<n;i++){
            if(max1<mat3[i][j]){
                max1 = mat3[i][j];
            }
        }
    }

    /*for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%d ",mat1[i][j]);
        }
        printf("\n");
    }

    printf("\n\n");

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%d ",mat2[i][j]);
        }
        printf("\n");
    }

    printf("\n\n");

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%d ",mat3[i][j]);
        }
        printf("\n");
    }

    printf("\n\n");*/

    printf("%d ", max1);

    return 0;
}