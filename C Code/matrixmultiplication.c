//matrix multiplication 
#include<stdio.h>
#include<string.h>

int main(){
int a,b,c;
//input matrix dimmention
printf("enter a,b,c of matrix axb bxc\n");
scanf("%d%d%d",&a,&b,&c);
int matrix1[a][b];//matrix 1
int matrix2[b][c];//matrix 2
int multiplication[a][b];//result matrix
printf("Enter matrix1\n");
for (int i=0;i<a;i++){
    for(int j=0;j<b;j++){
        scanf("%d",&matrix1[i][j]);//matrix1 input
    }
}
printf("Enter matrix2\n");
for (int i=0;i<b;i++){
    for(int j=0;j<c;j++){
        scanf("%d",&matrix2[i][j]);//matrix2 input
    }
}
//multiplication
for (int i=0;i<a;i++){
    for(int j=0;j<c;j++){
        int sum=0;
        for(int k=0;k<b;k++){
                sum+=matrix1[i][k]*matrix2[k][j];
                // multiplication[i][j]=
        }
        multiplication[i][j]=sum;
    }
}

printf("\n\n");
//printing resultant matrix
for (int i=0;i<a;i++){
    for(int j=0;j<c;j++){
        printf("%d ",multiplication[i][j]);
    }
    printf("\n");
}
return 0;
}
