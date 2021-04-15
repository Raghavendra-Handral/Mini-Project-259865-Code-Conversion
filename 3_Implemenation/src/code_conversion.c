#include <code_conversion.h>

unsigned int b2g(unsigned int b){
 
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

unsigned int g2b(unsigned int g){
    int temp1;
    temp1 = g ^ (g >> 128);
    temp1 = g ^ (g >> 64);
    temp1 = g ^ (g >> 32);
    temp1 = g ^ (g >> 16);
    temp1 = g ^ (g >> 8);
    temp1 = g ^ (g >> 4);
    temp1 = g ^ (g >> 2);
    temp1 = g ^ (g >> 1);
    temp1 = g;
    return temp1;
}