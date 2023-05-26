
#include "libb.h"
float massimo(float num[],int dim){
    float max=num[0];
        for (int i = 0; i < dim; i++) {
        if(num[i]>max){
            max=num[i];
        }
        }

    return max;
}
