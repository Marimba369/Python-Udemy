#include<stdio.h>
#include<stdlib.h>

#define SIZE 1000

struct base
{
    int value;
    int *next_left;
    int *next_rigth;
};

void creatStruct(struct base *b[])
{
    for(int i = 0; i < SIZE; i++)
        b[i] = NULL;
}

void print(int array[], int n)
{
    for(int i = 0; i < n; i++)
        printf("%d  ",array[i]);
}

int main()
{
    struct base *b[SIZE]; //strcut of the node main

    creatStruct(b);


    int number_Left, number_right;

    scanf("%d", &number_Left);
    int array_left[number_Left];

    for(int i = 0; i < number_Left; i++)
        scanf("%d", &array_left[i]);

    print(array_left, number_Left);
    printf("\n");


    return 0;
}