
#include "lib.h"
float massimo(float num[],int j){
    float max=num[0];
        for (int i = 0; i<j; i++) {
        if(num[i]>max){
            max=num[i];
        }
        }

    return max;
}
