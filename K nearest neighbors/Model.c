#include <stdio.h>
#include <math.h>
#include <stdlib.h>

float pol(float x1, float x2, float y1, float y2){
    return sqrt(pow(x1-x2, 2) + pow(y1-y2, 2));
}

float sum(float *A, int index){
    float sum = 0;
    int i;
    for(i=0; i<index; i++){
        sum += A[i];
    }
    return sum;
}

float minimum(float *A){
    float min = A[0];
    return min; 
}

void swap(float *x, float *y){
    float temp = *x;
    *x = *y;
    *y = temp;
}

int main(){
    float* x = (float *)malloc(6*sizeof(x));
    float* y = (float *)malloc(6*sizeof(y));
    char *A[] = {"No", "Fat", "No", "Fat", "Fat", "No"};
    return 0;
}