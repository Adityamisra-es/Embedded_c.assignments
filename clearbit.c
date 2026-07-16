/***
Complete the function clearBit to clear (turn off) a specific 
 indexed bit(from right) of an unsigned 16-bit integer 
. Consider 0-based indexing from right.

Sample Input

15 //n
2 //k
Output

11
Explanation:

16 bit binary representation for decimal 15 is 0000000000001111, after clearing 2nd indexed bit from right, it will become 00000000000001011 which is 11 in decimal.
***/
#include<stdio.h>
#include<stdint.h>
uint16_t clearBit(uint16_t num, uint16_t k);

//template code
uint16_t clearBit(uint16_t num, uint16_t k) 
{
     
 return num & ~(1U<<k);

} 

int main() {
    uint16_t num, k;
    scanf("%hu", &num);
    scanf("%hu", &k);

    printf("%hu", clearBit(num, k));
    return 0;
}
