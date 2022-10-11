#include <stdio.h>
int main ()
{   
    float num1,num2;
    double num3,num4;
    num1=3.14f;
    num2=(float)3.14155555555555;
    num3=3.141516;
    num4=3.14151677;
    printf("num1=%f,num2=%f\n",num1,num2);
    printf("num3=%lf,num4=%lf\n",num3,num4);
	return 0;
}
