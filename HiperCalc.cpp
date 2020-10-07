#include<stdio.h>
#include<math.h>
#include "iostream"
using namespace std;
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
int main()
{
    int num1, num2, ch, intResult;
    double num3, num4, doubleResult;
    do
    {
        cout<<"\n1. ADD\n2. SUB\n3. MUL\n4. DIV\n5. POW\n6. MOD\n7. EXIT"<<endl;
        cout<<"Enter Option: ";
        cin>>ch;
        switch (ch)
        {
        case 1:
            cout<<"Enter Two numbers for addition: ";
            cin>>num3>>num4;
            doubleResult = addition(num3, num4);
            cout<<doubleResult;
            break;
        case 2:
            cout<<"Enter Two numbers for subtraction: ";
            cin>>num3>>num4;
            doubleResult = subtract(num3, num4);
            cout<<doubleResult;
            break;
        case 3:
            cout<<"Enter Two numbers for multiplication: ";
            cin>>num3>>num4;
            doubleResult = multiply(num3, num4);
            cout<<doubleResult;
            break;
        case 4:
            cout<<"Enter Two numbers for division: ";
            cin>>num3>>num4;
            doubleResult = divide(num3, num4);
            cout<<doubleResult;
            break;
        case 5:
            cout<<"Enter Two numbers for power: ";
            cin>>num1>>num2;
            intResult = power(num1, num2);
            cout<<intResult;
            break;
        case 6:
            cout<<"Enter Two numbers for modulus: ";
            cin>>num1>>num2;
            intResult = modulo(num1, num2);
            cout<<intResult;
            break;
        case 7: cout<<"Thank you";
            break;
        default: cout<<"Invalid Option!";
            break;
        }
    }
    while(ch!=7);
}