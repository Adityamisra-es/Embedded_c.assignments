/***
Complete the function isBitSet to check a specific 
 indexed bit(from right) of an unsigned 16-bit integer num is set(1) or not set(0). If set print true otherwise print false. Consider 0-based indexing from right.
Sample Input

10 //n
1 //k
Output

true
Explanation:

16 bit binary representation for decimal 10 is 0000000000001010, here 1st indexed bit is set(1), hence output is true.

 

Sample Input

10 //n
2 //k
Output

false
Explanation:

16 bit binary representation for decimal 10 is 0000000000001010, here 2nd indexed bit is not set(0), hence output is false.
***/
#include<stdio.h>
#include<stdint.h>
uint16_t isBitSet(uint16_t num, uint16_t k);
uint16_t isBitSet(uint16_t num, uint16_t k) 
{
    // Write solution code below


 if(num&(1U<<k)){ printf("true"); return 1;}
else {printf("false"); return 0;}


}

int main() {
    uint16_t num, k;
    scanf("%hu", &num);
    scanf("%hu", &k);

    isBitSet(num, k);
    return 0;
}
