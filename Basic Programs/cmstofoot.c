# include<stdio.h>
#include <math.h>

int main() {
    float cms;
    printf("enter unit cms: ");
    scanf("%f", &cms);
    float length = cms/2.54;
    float feet= floor(length/12);
    float inches= length- (12*feet);
    printf("%f centimeters is %f feet %0.2f inches", cms, feet, inches);
    
    return 0;
}