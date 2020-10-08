#include "../inc/headers.h"

double addition(double v1, double v2)
{
    return v1+v2;
}
double subtract(double v1, double v2)
{
    return v1-v2;
}
double multiply(double v1, double v2)
{
    return v1*v2;
}
double divide(double v1, double v2)
{
    if(v2!=0)
        return v1/v2;
    else
        return false;
}
int power(int v1, int v2)
{
    return pow(v1, v2);
}
int modulo(int v1, int v2)
{
    return v1%v2;
}