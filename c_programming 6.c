//1.
#include <stdio.h>
    int main(void)
    {
        int a = 1, b = 2, c = 3;
        printf("%3d%3d%3d\n", a, b, c);
    {
        int b = 4;
        int c = 5;
        printf("%3d%3d%3d\n", a, b, c);
        a = b;
        {
            int c = 6;
            c = b;
            printf("%3d%3d%3d\n", a, b, c);
        }
        printf("%3d%3d%3d\n", a, b, c);
        {
            printf("%3d%3d%3d\n", a, b, c);
        }
        printf("%3d%3d%3d\n", a, b, c);
    }
        printf("%3d%3d%3d\n", a, b, c);
        return 0;
    }   

//2-1.
#include <stdio.h>
void test_static(void);
int main(void)
{
    test_static();
    test_static();
    test_static();
    return 0;
}

void test_static(void)
{
    int index = 10;
    printf("%d\n", index);
    index++;
}
//2-2.
#include <stdio.h>
void test_static(void);
int main(void)
{
    test_static();
    test_static();
    test_static();
    return 0;
}

void test_static(void)
{
    static int index = 10;
    printf("%d\n", index);
    index++;
}

//3-1.
#include <stdio.h>
int a = 10;
int main(void)
{
    printf("%d\n", a);
    return 0;
}
//3-2.
#include <stdio.h>
int main(void)
{
    printf("%d\n", a);
    return 0;
}
int a = 10;
//3-3.
#include <stdio.h>
int a = 10;
int main(void)
{
    extern int a;
    printf("%d\n", a);
    return 0;
}
//3-4.
#include <stdio.h>

int main(void)
{
    extern int a;
    printf("%d\n", a);
    return 0;
}
int a = 10;
//3-5.
#include <stdio.h>
int a;
int main(void)
{
    a = 10;
    printf("%d\n", a);
    return 0;
}
//3-6.
#include <stdio.h>
int a = 10;
int main(void)
{
    int a = 6;
    printf("%d\n", a);
    return 0;
}

//4.
#include <stdio.h>
int max(int num1, int num2);
int main(void)
{
    int a, b, result;

    printf("두 개의 정수를 입력하세요: ");
    scanf("%d %d", &a, &b);
    result = max(a, b);
    printf("두 수 중 큰 값은: %d\n", result);

    return 0;
}
int max(int num1, int num2)
{
    if (num1 > num2) {
        return num1;
    } 
    else {
        return num2;
    }
}

//5.
#include <stdio.h>
#include <ctype.h>
int main(void) {
    int c;
    while((c = getchar()) != EOF) {
        if(islower(c)) 
        c = toupper(c);
        else if(isupper(c))
        c = tolower(c);
        printf("%c", c);
    }
    return 0;
}

//6.
#include <stdio.h>
#include <ctype.h>

int up_down_case(int c);

int main(void) {
    int c;
    
    printf("알파벳을 입력하세요: \n");

    while ((c = getchar()) != EOF) {
        c = up_down_case(c);
        printf("%c", c);
    }
    
    return 0;
}

int up_down_case(int c) {
    if (islower(c)) {
        return toupper(c);
    } 
    else if (isupper(c)) {
        return tolower(c);
    }
    return c;
}

//7-1 my_header.h
#ifndef MY_HEADER_H
#define MY_HEADER_H

#include <ctype.h>

int up_down_case(int c) {
    if (islower(c)) {
        return toupper(c);
    } 
    else if (isupper(c)) {
        return tolower(c);
    }
    return c;
}
#endif

//7-2 main.c
#include <stdio.h>
#include "my_header.h"

int main(void) {
    int c;
    
    printf("알파벳을 입력하세요: \n");

    while ((c = getchar()) != EOF) {
        c = up_down_case(c);
        printf("%c", c);
    }
    
    return 0;
}

//8-1.
#include <stdio.h>
int up_down_case(int c);

int main(void) {
    int c;

    printf("알파벳을 입력하세요: \n");

    while ((c = getchar()) != EOF) {
        c = up_down_case(c);
        printf("%c", c);
    }

    return 0;
}
//8-2.
#include <ctype.h>

int up_down_case(int c) {
    if (islower(c)) {
        return toupper(c);
    } 
    else if (isupper(c)) {
        return tolower(c);
    }
    return c;
}
