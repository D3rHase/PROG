#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <limits>

using namespace std;


int main() {
    
    long double E_LITTERATURE_VALUE = M_El;
    float eSeqF;
    double eSeqD;

    int bestIFloat = 0, bestIDouble = 0;
    double bestDoubleValue;
    float bestFloatValue;
    long double errorFloat, errorDouble;

    for(int i = 0; i < 10000000; i++){

        eSeqF = powf(((float)1 + (float)(1.0/i)), (float)i);
        eSeqD = pow((1 + (1.0/i)), i);

        errorFloat =  abs(E_LITTERATURE_VALUE - eSeqF);
        errorDouble = abs(E_LITTERATURE_VALUE - eSeqD);
        

        bestIFloat = errorFloat < abs(E_LITTERATURE_VALUE - bestFloatValue) ? i : bestIFloat;
        bestFloatValue = errorFloat < abs(E_LITTERATURE_VALUE - bestFloatValue) ? eSeqF : bestFloatValue;

        bestIDouble = errorDouble < abs(E_LITTERATURE_VALUE - bestDoubleValue) ? i : bestIDouble;
        bestDoubleValue = errorDouble < abs(E_LITTERATURE_VALUE - bestDoubleValue) ? eSeqD : bestDoubleValue;
    }

    printf("e litterature value: %36.18Lf\n", E_LITTERATURE_VALUE);
    printf("e calculated with double precision: %18.15f, error: %22.20Lf\n", eSeqD, abs(E_LITTERATURE_VALUE - eSeqD));
    printf("e calculated with float precision: %19f, error: %22.20Lf\n\n", eSeqF, abs(E_LITTERATURE_VALUE - eSeqF));
    printf("Best approx e with double precision: %17.15f, error: %22.20Lf, at itteration: %i\n", bestDoubleValue, abs(E_LITTERATURE_VALUE - bestDoubleValue), bestIDouble);
    printf("Best approx e with float precision: %18f, error: %22.20Lf, at itteration: %i\n\n", bestFloatValue, abs(E_LITTERATURE_VALUE - bestFloatValue), bestIFloat);
    printf("With bigger i the approximation with double is gaining and the approximation with float is loosing precision.\n");
    
}
