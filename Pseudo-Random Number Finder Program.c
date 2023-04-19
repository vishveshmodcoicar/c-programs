//Author : Vishvesh Modcoicar
#include <stdio.h>
#include <stdlib.h>

int main( int argc, char *argv[]){
    
    if(argc < 2)
    {
        printf("Wrong Number Of Inputs");
        return -1;
    }
    int i;
    int n=atoi(argv[1]);
    for (i=0 ; i<n ; i++){
        printf("Pseudo-Random Number: %d\n",(rand() % 80));
    }
    return 0;
}
