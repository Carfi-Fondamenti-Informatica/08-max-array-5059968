
#include "libb.h"
int massimo(int num[],int dim){
    int max;
        for (int i = 0; i < dim; i++) {
        if(num[i]>max){
            max=num[i];
        }
        }

    return max;
}
