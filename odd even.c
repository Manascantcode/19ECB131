#include <stdio.h>

int main() {
    int a;
    printf("Enter an integer (positive or negative): ");
    scanf("%d", &a);
    if (a > 0) {
      printf("The nubmber %d is positive", a);
      if (a %2 == 0)
        printf("\nThe number is even");
      else
        printf("\nThe number is odd");
    }
    else if (a < 0)
      printf("The number %d is negative", a);
    else
        printf("The number %d is zero", a);
    
    return 0;
}

/*OUTPUT

Enter an integer (positive or negative): 8
The number 8 is positive
The number is odd

Enter an integer (positive or negative): 10
The nubmber 10 is positive
The number is even

Enter an integer (positive or negative): 0
The number 0 is zero

Enter an integer (positive or negative): -6
The number -6 is negative

*/
