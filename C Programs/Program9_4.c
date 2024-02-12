#include<stdio.h>

double FhtoCs(float fTemp)
{
   float fCelcius = 0.0;
   double fCs = 0.0;

    fCs = (fTemp - 32) * 0.55555555556;

    return fCs;
}


int main()
{
    float fValue = 0.0;
    double dRet = 0.0;

    printf("Enter temprature in fahrenheit : \n");
    scanf("%f",&fValue);

    dRet = FhtoCs(fValue);

    printf("Fahrenheit into Celsius is %f\n",dRet);

    return 0;
}