#include <stdio.h>
#include <math.h>
int main()
{
    float x, y, z, avg;
    printf("Enter the three numbers:");
    scanf("%f %f %f",&x,&y,&z);
    avg=(x+y+z)/3;
    printf("The result is:%f",avg);
    return 0;
}