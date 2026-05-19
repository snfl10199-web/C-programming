//1.
#include <stdio.h>

int main(void) {
    int num1, num2;
    int sum;

    printf("두 개의 정수 입력: ");
    
    scanf("%d %d", &num1, &num2);

    sum = num1 + num2;

    printf("%d와 %d의 합: %d.\n", num1, num2, sum);

    return 0;
}

//2.
#include <stdio.h>

void input_numbers(int *n1, int *n2) {

    printf("두 개의 정수 입력: ");
    
    scanf("%d %d", n1, n2); 
}

int main(void) {
    int num1, num2;
    int sum;

    input_numbers(&num1, &num2);

    sum = num1 + num2;

    printf("%d와 %d의 합: %d.\n", num1, num2, sum);

    return 0;
}

//3.
#include <stdio.h>

int calculate_sum(int n1, int n2) {
    int result = n1 + n2;
    return result; 

}

int main(void) {
    int num1, num2;
    int sum;

    printf("두 개의 정수 입력: ");

    scanf("%d %d", &num1, &num2);

    sum = calculate_sum(num1, num2);

    printf("%d와 %d의 합: %d.\n", num1, num2, sum);

    return 0;
}

//4.
#include <stdio.h>

void print_result(int n1, int n2, int sum) {

    printf("%d와(과) %d의 합은 %d입니다.\n", n1, n2, sum);
}

int main(void) {
    int num1, num2;
    int sum;

    printf("두 개의 정수를 입력하세요 (예: 10 20): ");

    scanf("%d %d", &num1, &num2);

    sum = num1 + num2;

    print_result(num1, num2, sum);

    return 0;
}

//5.
#include <stdio.h>

int main(void) {
    int i, j;

    for (i = 0; j = 0; i <= 10; i++){
        j = j + i;
        printf("The sum(0: %d) = %d\n", i, j);
    }
    return 0;
}

//6.
#include <stdio.h>

int add_and_print(int i, int j) {
    j = j + i;
    printf("The sum(0: %d) = %d\n", i, j);
    
    return j;
}
int main(void) {
    int i;
    int j = 0;

    for (i = 0; i <= 10; i++) {
        j = add_and_print(i, j); 
    }
    
    return 0;
}

//7.
#include <stdio.h>

int calculate_sum(int n1, int n2) {
    return n1 + n2; 
}

void print_result(int i, int j) {
    printf("The sum(0: %d) = %d\n", i, j);
}

int main(void) {
    int i, j;

    for (i = 0, j = 0; i <= 10; i++){

        j = calculate_sum(j, i);

        print_result(i, j);
    }
    
    return 0;
}