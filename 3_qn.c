#include <stdio.h>

int main(){
    float radius,diameter,circumference,area;
    float pi =3.14;
    
    printf("enter the value of radius \n");
    scanf("%f", &radius);

    printf("the value of diameter is %f \n", diameter=2*radius);
    printf("the value of circumference is %f \n",circumference=2*pi*radius);
    printf("the area of circle is %f \n", area=pi*radius*radius);
    return 0;
}