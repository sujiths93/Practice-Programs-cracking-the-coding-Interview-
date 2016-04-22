#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int num;

void strassen(int a[][num], int b[][num], int c[][num], int s)
{

int p1[s/2][s/2], p2[s/2][s/2], p3[s/2][s/2], p4[s/2][s/2],
p5[s/2][s/2], p6[s/2][s/2], p7[s/2][s/2];

int temp[s/2][s/2], tmp[s/2][s/2];

int q1, q2, q3, q4, q5, q6, q7, i, j;

if(s >= 2)
{

        for(i = 0; i < s / 2; i++)
        {

        for(j = 0; j < s / 2; j++) {

            temp[i][j] = a[i][j] + a[i + s / 2][j + s / 2];

            }

        }

        for(i =0; i < s / 2; i++)
        {

            for(j = 0; j < s / 2; j++) {

                tmp[i][j] = b[i][j] + b[i + s / 2][j + s / 2];

            }

        }

    num = s / 2;

    strassen(temp, tmp, p1, s / 2);



    for(i = 0; i < s/2; i++)
    {
        for(j = 0; j < s/2; j++)
        {
            temp[i][j] = a[i + s / 2][j] + a[i + s / 2][j + s / 2];

        }

    }

    for(i = 0; i < s / 2; i++)
    {
        for(j = 0; j < s / 2; j++)
        {
            tmp[i][j] = b[i][j];
        }

    }

num = s / 2;

strassen(temp, tmp, p2, s / 2);

//To calculate p3

for(i = 0; i < s / 2; i++)
{

        for(j = 0; j < s / 2; j++)
        {
            temp[i][j] = a[i][j];

        }

}

for(i = 0; i < s / 2; i++)
{

    for(j = 0; j < s / 2; j++)
    {

        tmp[i][j] = b[i][j + s / 2] - b[i + s / 2][j + s / 2];

    }

}

num = s / 2;

strassen(temp, tmp, p3, s / 2);

//To calculate p4

for(i = 0; i < s / 2; i++)
{

    for(j = 0; j < s / 2; j++) {

        temp[i][j] = a[i + s / 2][j + s / 2];

    }

}

for(i = 0; i < s / 2; i++)
{
    for(j = 0; j < s / 2; j++) {
    tmp[i][j] = b[i + s / 2][j] - b[i][j];
    }

}

num = s / 2;

strassen(temp, tmp, p4, s / 2);

//p5

for(i = 0; i < s / 2; i++)
{
    for(j = 0; j < s / 2; j++) {

    temp[i][j] = a[i][j] + a[i][j + s / 2];

    }

}

for(i = 0; i < s / 2; i++)
{
    for(j = 0; j < s / 2; j++) {

        tmp[i][j] = b[i + s / 2][j + s / 2];

    }

}

num = s / 2;

strassen(temp, tmp, p5, s / 2);

//p6

for(i = 0; i < s / 2; i++) {

    for(j = 0; j < s / 2; j++)
    {
        temp[i][j] = a[i + s / 2][j] - a[i][j];
    }

}
num = s / 2;

for(i = 0; i < s / 2; i++) {

    for(j = 0; j < s / 2; j++) {

    tmp[i][j] = b[i][j] + b[i][j + s / 2];

    }

}

num = s / 2;

strassen(temp, tmp, p6, s / 2);

//p7

for(i = 0; i < s / 2; i++) {

    for(j = 0; j < s / 2; j++) {

    temp[i][j] = a[i][j + s / 2] - a[i + s / 2][j + s / 2];

    }

}

for(i = 0; i < s / 2; i++)
{
    for(j = 0; j < s / 2; j++) {
        tmp[i][j] = b[i + s / 2][j] + b[i + s / 2][j + s / 2];

    }

}

num = s / 2;

strassen(temp, tmp, p7, s / 2);

//c11

for(i = 0; i < s / 2; i++)
{

    for(j = 0; j < s / 2; j++) {
        c[i][j] = p1[i][j] + p4[i][j] - p5[i][j] + p7[i][j];

    }

}

//c12

for(i = 0; i < s / 2; i++)
{
    for(j = 0; j < s / 2; j++) {
        c[i][j + s / 2] = p3[i][j] + p5[i][j];

    }

}

//c21

for(i = 0; i < s / 2; i++) {

    for(j = 0; j < s / 2; j++) {
        c[i + s / 2][j] = p2[i][j] + p4[i][j];
    }

}

//c22

for(i = 0; i < s / 2; i++) {

    for(j = 0; j < s / 2; j++) {

    c[i + s / 2][j + s / 2] = p1[i][j] + p3[i][j] - p2[i][j] + p6[i][j];

    }

}

}

else if(s == 1) {

c[0][0] = a[0][0] * b[0][0];

}

}

int padding(int num)
{

    int original_num = num, lower_power = 0, i, actual_num = 1;
    if(num == 1)
    return 1;

    while(num > 1) {

        lower_power++;

        num /= 2;

    }


    for(i = 0; i < lower_power; i++) {

        actual_num *= 2;

    }

    if(actual_num == original_num)

    return original_num;

    else

    return actual_num * 2;

}

int main()
{
    clock_t begin,end;
    double time_spent;
    int i, j, temp,r;

    printf("Enter the size of the square matrix:\n");

    scanf("%d", &num);

    temp = num;

    if(num <= 0)

    return 0;

    num = padding(num);

    int a[num][num], b[num][num], c[num][num];


    for(i=0;i<num;i++)
    {
        for(j=0;j<num;j++){

            a[i][j]=rand()%100;
        }
    }


    printf("Matrix a:\n"); //printing the actual matrices for strassen's multiplication

    for(i = 0; i < num; i++) {

    for(j = 0; j < num; j++) {

    printf("%d ", a[i][j]);

    }

printf("\n");

}


begin=clock();
strassen(a, a, c, num);
end=clock();
time_spent=(double)(end-begin)/CLOCKS_PER_SEC;

printf("\nMatrix c is:\n");

for(i = 0; i < temp; i++) {

    for(j = 0; j < temp; j++) {

        printf("%d ", c[i][j]);

    }

printf("\n");

}
printf("TIME SPENT IS %f\n\n\n",time_spent);
return 0;

}
