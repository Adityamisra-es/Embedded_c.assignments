/***
Write a function sumArray that takes a pointer to an array of integers and its size, and returns the sum of all the elements using pointer arithmetic.

Sample Input

10 //n
1 2 3 4 5 6 7 8 9 10 // array elements
Output

55
  ***/
#include<stdio.h>
int sumArray(int *arr, int size);
//template code
int sumArray(int *arr, int size) {
    // Write solution code below
     int sum =0;
     for(int i=0;i<size;i++)
     {
         sum=sum+*(arr+i);
     }
     return sum;

}

int main() {
    int arr[100],size;
    scanf("%d", &size);
    for(int i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("%d", sumArray(arr, size));
    return 0;
}
