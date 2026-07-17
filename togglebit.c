/***
Complete the function toggleBit to toggle(invert) a specific 
 indexed bit(from right) of an unsigned 16-bit integer n. Consider 0-based indexing from right.

Sample Input

10 //n
2 //k
Output

14
Explanation:

16 bit binary representation for decimal 10 is 0000000000001010, after inverting 2nd indexed bit from right, it will become 00000000000001110 which is 14 in decimal.

 

Sample Input

10 //n
1 //k
Output

8
Explanation:

16 bit binary representation for decimal 10 is 0000000000001010, after inverting 1st indexed bit from right, it will become 00000000000001000 which is 8 in decimal.
***/
#include<stdio.h>
#include<stdint.h>
uint16_t toggleBit(uint16_t num, uint16_t bit);

//template code
uint16_t toggleBit(uint16_t num, uint16_t bit) 
{
    // Write solution code below


  return num ^ (1U<<bit);


}

int main() {
    uint16_t n, k;
    scanf("%hu", &n);
    scanf("%hu", &k);

    printf("%hu", toggleBit(n, k));
    return 0;
}
