#include<stdio.h>

int main(){
    int n,m = 0;
    scanf("%d",&n);
    for(int i = 0; i < n; i++){
         m+=i;
    }
    printf("%d",m);

    return 0;
}
