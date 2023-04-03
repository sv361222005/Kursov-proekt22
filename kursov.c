#include <stdio.h>

int main() {
    // Отпечатване на условието на задачата
    printf("Program for processing arrays A[8,10], B[10,15], C[12,20] consisting of integers in the range [0; 999].\n");

    // Отпечатване на името на автора
    printf("Author: [Your Name]\n");

     // Въвеждане на входните данни
    int A[8][10], B[10][15], C[12][20];
    printf("Enter the elements of array A[8,10]:\n");
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 10; j++) {
           
            printf("A[%d][%d]=",i,j);
            scanf("%d", &A[i][j]);
            while (A[i][j] <= 0 || A[i][j] >= 999)
        {
        printf("Invalid input! Please enter a number between 0 and 999.\n");
        printf("Enter a number between 0 and 999: ");
        printf("A[%d][%d]=",i,j);
        scanf("%d", &A[i][j]);
        printf("\n");
        }
    }
    printf("Enter the elements of array B[10,15]:\n");
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 15; j++) {
         
            printf("B[%d][%d]=",i,j);
            scanf("%d", &B[i][j]);
        while (B[i][j] <= 0 || B[i][j] >= 999) 
        {
        printf("Invalid input! Please enter a number between 0 and 999.\n");
        printf("Enter a number between 0 and 999: ");
        printf("B[%d][%d]=",i,j);
        scanf("%d", &B[i][j]);
        printf("\n");
        }
        }
    }
    printf("Enter the elements of array C[12,20]:\n");
    for (int i = 0; i < 12; i++) {
        for (int j = 0; j < 20; j++) {
          
            printf("C[%d][%d]=",i,j);
            scanf("%d", &C[i][j]);
            while (C[i][j] <= 0 || C[i][j] >= 999) 
        {
        printf("Invalid input! Please enter a number between 0 and 999.\n");
        printf("Enter a number between 0 and 999: ");
        printf("C[%d][%d]=",i,j);
        scanf("%d", &C[i][j]);
        printf("\n");
        } 
        }
    }
    
    // Отпечатване на входните данни
    printf("Array A[8,10]:\n");
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 10; j++) {
            printf("%3d ", A[i][j]);
        }
        printf("\n");
    }
    printf("Array B[10,15]:\n");
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 15; j++) {
            printf("%3d ", B[i][j]);
        }
        printf("\n");
    }
    printf("Array C[12,20]:\n");
    for (int i = 0; i < 12; i++) {
        for (int j = 0; j < 20; j++) {
            printf("%3d ", C[i][j]);
        }
        printf("\n");
    }

    // Намиране на средната аритметична стойност на четните елементи
    int sum = 0, count = 0;
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 10; j++) {
            if (A[i][j] % 2 == 0) {
                sum += A[i][j];
                count++;
            }
        }
    }
    float average = (float) sum / count;
    printf("Average of even elements in array A[8,10]: %.2f\n", average);

    // Получаване на новия масив AN[N,M]
    int AN[8][10];
    for (int i = 0; i < 8; i++)
    for (int j = 0; j < 10; j++) {
        if (A[i][j] % 2 == 0) {
            AN[i][j] = A[i][j];
        } else {
            int digit_sum = 0, num = A[i][j];
            while (num > 0) {
                digit_sum += num % 10;
                num /= 10;
            }
            AN[i][j] = digit_sum;
        }
    }


// Отпечатване на резултатите след обработка а) и б)
printf("Array AN[8,10]:\n");
for (int i = 0; i < 8; i++) {
    for (int j = 0; j < 10; j++) {
        printf("%3d ", AN[i][j]);
    }
    printf("\n");
}

return 0;
}
/*
Забележки:
- Може да се повтори кодът за въвеждане на входните данни и за обработката на масивите B и C, ако е необходимо;
- При пресмятането на средната аритметична стойност на четните елементи, трябва да се вземе предвид, че може да има масиви, в които няма четни елементи;
- При получаването на новия масив AN[N,M], четните елементи се запазват, а нечетните се заместват със сумата от цифрите им.
*/
