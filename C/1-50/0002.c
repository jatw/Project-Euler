/*
 * Project Euler - Problem 2
 * 
 * By considering the terms in the Fibonacci sequence whose values do not
 * exceed four million, find the sum of the even-valued terms.
 */

#include <stdio.h>

int main(void) {
    int sum = 0;
    
    int a = 1, b = 2;
    
    while (b < 4000000) {
        if (b % 2 == 0)
           sum += b;

        b = b + a;
        a = b - a;
    }
    
    printf("%d", sum);
    
    return 0;
}