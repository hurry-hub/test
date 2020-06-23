#include<stdio.h>

int main(){
    int n,m = 0;
    scanf("%d",&n);
    for(int i = 1; i <= n; i++){
         m+=i;
    }
    printf( "%d\n",n+1 );
    printf("%d",m);

    return 0;
}
