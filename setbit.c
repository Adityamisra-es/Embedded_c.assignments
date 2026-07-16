
/***
Complete the function setBit to set (turn on) a specific 
 indexed bit(from right) of an unsigned 32-bit integer 
. Consider 0-based indexing from right.

Sample Input

0 //num
4 //k
Output

16
Explanation:

32 bit binary representation for decimal 0 is 00000000000000000000000000000000, after setting 1 on 4th indexed bit from right, it will become 00000000000000000000000000010000 which is 16 in decimal.
***/
#include<stdio.h>
#include<stdint.h>

uint32_t setBit(uint32_t num, uint32_t k);
//template code
unsigned int setBit(uint32_t num, uint32_t k) 
{
  return (num | 1U<<k);
}

int main() {
    unsigned int num, k;
    scanf("%u", &num);
    scanf("%u", &k);
    
    printf("%u", setBit(num, k));
    return 0;
}
