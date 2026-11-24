#include <stdio.h>
int main(){
    int l;
    printf("enter a length=");
    scanf("%d",&l);
    int array[l];
    for(int i=0;i<l;i++){
        printf("\nenter %d element=",i+1);
        scanf("%d",&array[i]);
    }
    for(int j=0;j<l;j++){
        printf("\n%d element=%d",j+1,array[j]);
    }
    return 0;
}