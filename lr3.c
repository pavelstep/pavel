#include <stdio.h>
#include "lr3.h"
#define G 1000/3600;
#define YES 1
#define NO 0
#define MAX 100000
#define N 10
#define F 0
#define T 1
#define K 20
#define K 3
#define N 4

int lab3()
{
    int c;
    int found = 0;
    int flag = YES;
    int prev_c = '_';
    int first = ' ';
    int g;

    while((c = getchar()) != EOF)
    {
        if(flag == YES)
        {
            first = c;
            flag = NO;
        }
        if(c == ' '||c == '.'||c == ','||c == '\n')
        {
            flag = YES;
            if(first == g, prev_c)
                found = 0;
            if(first == prev_c)
                found += 1;
        }
        prev_c = c;
        g = c;
    }
    printf("found: %d", found);
    return 0;
}

int lab2()
{

    float s,a;
    int n,i,k;
    printf("n=");
    scanf("%d", &n);
    s=0.;
    k=1;
    i=0;
    while(i<n)
    {
        a=(3.0+i)/(1.0+i*3.0);
        s=s+a*k;
        k=-k;
        i=i+1;
    }
    printf("s=%f",s);

    return 0;

}

int lab21()
{
    float s,a;
    int n,i,k;
    printf("n=");
    scanf("%d", &n);
    s=0.;
    k=1;

    for(i=0; i<n; ++i)
    {
        a=(3.0+i)/(1.0+i*3.0);
        s=s+a*k;
        k=-k;
    }
    printf("s=%f",s);

    return 0;

}

int lab1()
{
 float P;
    float A;
    float B;
    float C;
    printf("A=");
    scanf("%f", &A);
    printf("B=");
    scanf("%f", &B);
    printf("C=");
    scanf("%f", &C);
    P = ( A + B * B ) / ( C - A );
    printf("P=%f", P);

    return 0;
}

int lab11()
{
        float P, A, B, C, t1, t2;
    printf("A=");
    scanf("%f", &A);
    printf("B=");
    scanf("%f", &B);
    printf("C=");
    scanf("%f", &C);
    t1=A+B*B;
    t2=C-A;
    if(t2==0)
    {
        printf("деление на ноль\n");
        return-1;
    }
    P = t1/t2;
    printf("P=%f", P);
    return 0;
}

int lab4()
{
    int i = 0;
    int j = 0;
    int startword = F;
    int endword = F;
    char c;
    char line[MAX];
    char buffer[MAX];

    fgets(buffer, MAX, stdin);

    do
    {
        c = buffer[i];

        if(c == ',')
        {
            line[j++] = ' ';

            while(startword != T)
            {
                if(buffer[i] == ',' || buffer[i] == ' ' || buffer[i] == '.')
                i++;
                else
                startword = T;
            }

            while(endword != T)
            {
                if(buffer[i] != ',' && buffer[i] != ' ' && buffer[i] != '.')
                i++;
                else
                endword = T;
            }

            c = buffer[i];
        }

        startword = F;
        endword = F;

        line[j] = c;

        i++;
        j++;
    }
    while( c != '\0' );

    puts(line);

    return 0;
}

int lab41()
{
    int i = 0;
    int j = 0;
    int startword = F;
    int endword = F;
    char c;
    char line[MAX];
    char buffer[MAX];

    fgets(buffer, MAX, stdin);

    do
    {
        c = buffer[i];

        if(c == ',')
        {
            line[j++] = ' ';

            while(startword != T)
            {
                if(buffer[i] == ',' || buffer[i] == ' ' || buffer[i] == '.')
                i++;
                else
                startword = T;
            }

            while(endword != T)
            {
                if(buffer[i] != ',')
                i++;
                else
                endword = T;
            }
            i++;
            c = buffer[i];
        }

        startword = F;
        endword = F;

        line[j] = c;

        i++;
        j++;
    }
    while( c != '\0' );

    puts(line);

    return 0;

}

int lab5()
{
int arr[N]; int i;
int d; int b;

for(i = 0; i < N; i++) scanf("%d", &arr[i]);
d = arr[1] - arr[0];

for(i = 0; i < N; i++)
{
b = (arr[i + 1] - arr[0]) / (i + 1); if(b != d)
break;
}
i++;

if(i < N)
printf("neto :(");

else
printf("sudaaaa :)");

return 0;
}

int lab51()
{
    int arr[K];
    int i, f = 0;
    int mistakes = 0;

    for(i = 0; i < K; i++)
        scanf("%d", &arr[i]);

    for(i = 0; i < K; i++)
    {
        if(arr[i] < arr[i - 1])
        {
            if(arr[i] < arr[i - 1] && arr[i + 1] > arr[i - 1] && arr[i + 2] > arr[i - 1])
            {
                printf("В прогрессии есть огрехи: %d\n", arr[i]);
                mistakes++;
            }
            else
            {
                printf("Прогрессия не обнаружена\n");
                f = 1;
            }
        }
    }

    if (mistakes > 1)
        printf("Прогрессия не обнаружена\n");
    else
    {
        if(f == 0)
            printf("Элементы массива составляют арифметическую прогрессию :)\n");
    }

    return 0;

}

int lab6()
{

    long long int x[K][N];
    long long int b, max, min, strmax, strmin;
    long long int i, j;

    for(i = 0; i < K; i++)
        for(j = 0; j < N; j++)
            scanf("%lld", &x[i][j]);

    max = x[0][0];
    for(i = 0; i < K; i++)
        for(j = 0; j < N; j++)
            if(x[i][j] > max)
            {
                max = x[i][j];
                strmax = i;
            }

    min = x[0][0];
    for(i = 0; i < K; i++)
        for(j = 0; j < N; j++)
            if(x[i][j] < min)
            {
                min = x[i][j];
                strmin = i;
            }

    for(j = 0; j < N; j++)
    {
        b = x[strmax][j];
        x[strmax][j] = x[strmin][j];
        x[strmin][j] = b;

    }

    if(strmin == strmax)
        printf("max and min are situated in the same string");

    else
    {
        for( i = 0; i < K; i++ )
        {
            for( j = 0; j < N; j++ )
                printf("%4lld ", x[i][j]);
            printf("\n");
        }
    }

    printf("\n");
    printf("%lld, %lld \n", strmin, strmax);

return 0;
}

int lab6_1()
{
    int arr[K][N];
    int i, j, k, temp;

    for (i = 0; i < K; i++)
        for (j = 0; j < N; j++)
            scanf("%d", &arr[i][j]);
    printf("\n");

    for (j = 0; j < N; j++)
    {
        for (i = 0; i < K - 1; i++)
        {
            for (k = 0; k < K - i - 1; k++)
            {
                if (arr[k][j] > arr[k + 1][j])
                {
                    temp = arr[k][j];
                    arr[k][j] = arr[k + 1][j];
                    arr[k + 1][j] = temp;
                }
            }
        }
    }

    for (i = 0; i < K; i++)
    {
        for (j = 0; j < N - 1; j++)
        {
            for (k = 0; k < N - j - 1; k++)
            {
                if (arr[i][k] > arr[i][k + 1])
                {
                    temp = arr[i][k];
                    arr[i][k] = arr[i][k + 1];
                    arr[i][k + 1] = temp;
                }
            }
        }
    }

    for (i = 0; i < K; i++)
    {
        for (j = 0; j < N; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;

}


int lab7()
{
    long z;
    unsigned long y, c, mask = 1;
    int counter = 0;
    int cntall = 0;
    int pos = 0;
    int no = 1;

    printf("z = ");
    scanf("%lx", &z);

    c = y = (unsigned int)z;
    while( y != 0 )
    {
        cntall += y & mask;
        y >>= 1;
    }

    y = c;
    while( y != 0 )
    {
        counter += y & mask;
        if(counter == (cntall / 2))
        {
            if(cntall % 2 == 1)
            {
                counter = 0;
                while( y != 0 )
                {
                    pos++;
                    y >>= 1;
                    counter += y & mask;
                    if(counter == 1)
                    {
                        no = 0;
                        printf("position: %d\n", pos);
                        break;
                    }
                }
            }
            if(cntall % 2 == 0)
            {
                pos++;
                y >>= 1;
                counter += y & mask;
                if(counter == (cntall / 2))
                {
                    no = 0;
                    printf("position: %d\n", pos);
                    break;
                }
            }
            else
            {
                break;
            }
        }
                pos++;
        y >>= 1;
    }

    if (no == 1)
    {
        printf("NOOOO\n");
    }

    return 0;
}





