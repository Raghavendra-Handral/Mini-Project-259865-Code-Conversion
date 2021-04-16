#include <code_conversion.h>

unsigned int b2g(unsigned int b)
{
 
    unsigned int a, c; 
     if (!b) 
    { 
        return 0; 
    } 
    else 
    { 
        a = b % 10; 
        b = b / 10; 
        c = b % 10; 
        if ((a && !c) || (!a && c)) 
        { 
            return (1 + 10 * b2g(b)); 
        } 
        else 
        { 
            return (10 * b2g(b)); 
        } 
    } 
}

unsigned int g2b(unsigned int g)
{
    int temp1;
    
   
    temp1 = g ^ (g >> 16);
    temp1 = g ^ (g >> 8);
    temp1 = g ^ (g >> 4);
    temp1 = g ^ (g >> 2);
    temp1 = g ^ (g >> 1);
    temp1 = g;
    return temp1;
}

unsigned int b2d(unsigned int bin1)
{
    int rem,dec1=0,x=0;
    while(bin1!=0)
    {
        rem=bin1%10;
        bin1=bin1/10;
        dec1=dec1+rem*pow(2,x);
        x++;
    }

    return dec1;
}

unsigned int d2b(unsigned int dec2) 
{
    int n, rem, binary = 0, value = 1, i;

    n = dec2;

    for (i=0;n>0;)
    {
        rem = n % 2;
        binary += rem * value;
        value *= 10;
        n /= 2;
    }
    
    return binary;
}

