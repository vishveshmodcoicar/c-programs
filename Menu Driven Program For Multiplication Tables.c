//Author : Vishvesh Modcoicar
#include <stdio.h>
int main(){
    int n;
    printf("Enter Your Number For Its Multiplication Table:");
    scanf("%d",&n);
    for(int i=1;i<11;i++){
        printf("%d\n",i*n);  
    }
    return 0;
}