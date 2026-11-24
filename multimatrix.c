#include <stdio.h>
void mat(int m,int n,int arr[m][n]){
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            printf("enter element (%d %d)=",i+1,j+1);
            scanf("%d",&arr[i][j]);
        }
    }
}
void printmat(int m,int n,int arr[m][n]){
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
}
int main(){
    int m,n,k,l;
    printf("enter no of rows of A matrix=");
    scanf("%d",&m);
    printf("enter no of columns of A matrix=");
    scanf("%d",&n);
    int a[m][n];
    printf("enter elements of a\n");
    mat(m,n,a);
    printf("elements of a matix:\n");
    printmat(m,n,a);
    printf("enter no of rows of B matrix=");
    scanf("%d",&k);
    printf("enter no of columns of B matrix=");
    scanf("%d",&l);
    int b[k][l];
    printf("enter elements of b\n");
    mat(m,n,b);
    printf("elements of b matix:\n");
    printmat(m,n,b);
    if(n==k){
        int multi[m][l];
        for(int i=0;i<m;i++){
            for(int j=0;j<l;j++){
                int sum=0;
                for(int x=0;x<n;x++){
                    sum+=a[i][x]*b[x][j];
                }
                multi[i][j]=sum;
            }
        }
    printf("multipied matrix AxB=\n");
    printmat(m,l,multi);
    }
    else{
        printf("invalid matrix");
    }
    return 0;
}