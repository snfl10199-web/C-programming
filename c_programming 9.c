//1.
#include <stdio.h>
#define N 10
int main(void)
{
    int a[N];
    int b[N][N];
    printf("%d\n", sizeof(a[N-1]));
    printf("%d\n", sizeof(a));
    printf("%d\n", sizeof(b[N-1][N-1]));
    printf("%d\n", sizeof(b[N-1]));
    return 0;
}

//2.
#include <stdio.h>
int main(void) 
{
    int i;
    char str1[] = "Hello";
    char str2[] = {'H', 'e', 'l', 'l', 'o'};
    printf("%d %d\n", sizeof(str1), sizeof(str2));
    printf("%s\n", str1);
    for(i = 0; i < sizeof(str1); i++)
        printf("%c", str2[i]);
    return 0;
}

//3.
#include <stdio.h>
int main(void) 
{
    int key, i;
    int list[5] = {1, 2, 3, 4, 5};
    for (i = 0; i < 5; i++)
        printf("%d ", list[i]);
    printf("\nInput a key value : ");
    scanf("%d", &key);
    for (i = 0; i < 5; i++)
        if (list[i] == key)
            printf("Find the key at %d of the list array\n", i + 1);
    printf("End\n");
    return 0;
}
//3-1. ai 참고
#include <stdio.h>
int main(void) 
{
    int key, i, n;
    printf("Input size of the list : ");
    scanf("%d", &n);
    int list[n];
    printf("Input %d values of the list : ", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &list[i]);
    }
    return 0;
}

//4-1.
#include <stdio.h>
#include <stdlib.h>
int main(void) 
{
    for(int i = 1; i <= 5; i++)
        printf("%d\n", rand());
    return 0;
}
//4-2.
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void) 
{
    srand(time(NULL));
    for(int i = 1; i <= 5; i++)
        printf("%d\n", rand());
    return 0;
}

//5.
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void) 
{
    srand(time(NULL));
    for(int i = 0; i < 5; i++) 
        printf("%d\n", rand() % 100 + 1);
    return 0;
}

//6.
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void) 
{
    int lotto[6];
    srand(time(NULL));
    for(int i = 0; i < 6; i++)
        lotto[i] = rand() % 45 + 1;
        printf("%d ", lotto[i]);
    return 0;
}


//7.
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void) 
{
    int n, i, j;
    srand(time(NULL));
    printf("Enter lotto set number : ");
    scanf("%d", &n);
    int lotto[n][6];
    for (i = 0; i < n; i++)
        printf("set %d : ", i + 1);
        for (j = 0; j < 6; j++)
            lotto[i][j] = rand() % 45 + 1;
            printf("%d ", lotto[i][j]);
        printf("\n");
    return 0;
}

//8. 부분 코드
for (j = 0; j < 6; j++) {
            int temp;
            int isDuplicate;
            do {
                isDuplicate = 0;
                temp = rand() % 45 + 1;
                for (int k = 0; k < j; k++)
                    if (lotto[i][k] == temp)
                        isDuplicate = 1;
                        break;

            } while (isDuplicate); 
            lotto[i][j] = temp;
            printf("%d ", lotto[i][j]);
        }