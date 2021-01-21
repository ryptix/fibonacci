#include <stdio.h>
#include <stdlib.h>

typedef struct intfinity{
    unsigned int size;
    int* ptr;   
}intfinity;

void rprintf(intfinity inf){
    for(int i = 0; i < inf.size; i++){
        printf("%d",inf.ptr[i]);
    } 
}

intfinity infiniGen(unsigned int size){
    intfinity inf;
    
    inf.ptr = (int *) malloc(size);
    if(inf.ptr == NULL){fprintf(stderr, "Error - unable to allocate required memory\n");exit(0);}
    
    inf.size = size;

    return inf;
}


