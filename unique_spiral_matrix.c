#include <stdio.h>
int min(int a,int b){
    return a>b?b:a;
}
int main() 
{

    int n,k,gap;
    printf("enter size of pattern\n");
    scanf("%d", &n);
  	k=2*n-1;
    for(int i=0;i<k;i++){
        for(int j=0;j<k;j++){
            if(j<=n-1&&i<=n-1){
            gap=min(i,j);
            printf("%d ",n-gap);
            }
            else if(j<=n-1){
                gap=min(k-i-1,j);
            printf("%d ",n-gap);
            }
            else if(i<=n-1){
                gap=min(i,k-1-j);
            printf("%d ",n-gap);
            }
            else{
                gap=min(k-1-i,k-1-j);
            printf("%d ",n-gap);
            }
        }
        printf("\n");
    }
    return 0;
}
