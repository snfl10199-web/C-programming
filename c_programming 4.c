//1.
#include <stdio.h>
int main(void)
{
    int count = 1, i;
    for(i = 1; i <= 100; i++) {
        if (i%3 && i%5 && i%7)
            printf("%3d ", i);
    }
    return 0;
}

//2.
#include <stdio.h>
int main(void)
{
    int i=1;
    int n;
    int sum=0;
    scanf("%d", &n);
    while(  ?  )
    {
        if(  ?  )
            sum += i;
        i++;
    }
    printf("%d", sum);
    return 0;
}

//3. for문
#include <stdio.h>

int main(void)
{
    int n;
    int sum = 0;
    
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        if (i % 2 != 0)
        {
            sum += i;
        }
    }
    
    printf("%d", sum);
    return 0;
}
//3. do-while문
#include <stdio.h>

int main(void)
{
    int i = 1;
    int n;
    int sum = 0;
    
    scanf("%d", &n);
    
    do 
    {
        if (i % 2 != 0)
        {
            sum += i;
        }
        i++;
    } while (i <= n);
    
    printf("%d", sum);
    return 0;
}

//4.
#include <stdio.h>
int main(void)
{
    int value;
    int r_digit;
    printf("정수를 5개 연속해서 입력하세요.\n");
    scanf("%d", &value);
    printf("\n 출력 결과는 >>> ");
    do 
    {
        r_digit = value % 10;
        printf("%d", r_digit);
        value = value / 10;
    } while (value /* value != 0 */);
    printf("\n");
    return 0;
}

//5.
#include <stdio.h>
int main(void)
{
    int i, j;
    for (i = 1; i <= 9; i++)
    {
        for (j = 9; j >= 0; j--)
        {
            if (j >= i) printf("%d", j);
            else putchar(' ');
        }
        putchar('\n');
    }
    return 0;
}

//6.
#include <stdio.h>
int main(void)
{
    int i, j;
    i = 1;
    while( i <= 5 )
    {
        j = 1;
        while( j <= i )
        {
            printf("*");
            j++;
        }
        i++;
        printf("\n");
    }
    return 0;
}

//7.
#include <stdio.h>

int main(void)
{
    int dan;
    printf("Enter your dan : ");
    scanf("%d", &dan);
    
    for (int i = 1; i <= 9; i++) 
    {
        printf("%d * %d = %d\n", dan, i, dan * i);
    }
    
    return 0;
}

//8.
#include <stdio.h>

int main(void)
{
    int dan;
    int i; // 곱해지는 수 변수 선언
    
    printf("Enter your dan : ");
    scanf("%d", &dan);
    
    i = 1; // 1) 초기식: 1부터 곱하기 시작
    while (i <= 9) // 2) 조건식: 9단까지 출력하도록 제한
    {
        printf("%d * %d = %d\n", dan, i, dan * i);
        i++; // 3) 증감식: 다음 수로 증가
    }
    
    return 0;
}