#include <stdio.h>

int main()
{
    unsigned short int A, B, C;
    unsigned long long int out;
    
    scanf("%hu %hu %hu", &A, &B, &C);
    out = A;
    out |= (unsigned long long int)B << 16;
    out |= (unsigned long long int)C << 32;
    printf("%llu", out);
}
