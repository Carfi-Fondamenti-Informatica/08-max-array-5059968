
#include "libb.h"
int massimo(int num[],int dim){
    int max=num[0];
        for (int i = 0; i < dim; i++) {
        if(num[i]>max){
            max=num[i];
        }
        }

    return max;
}
