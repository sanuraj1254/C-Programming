#include<stdio.h>

int main(){
    int a1,a2,a3;
    scanf("%d %d %d ",&a1, &a2, &a3);
    int arr[3][10];
    int mul[]= {a1 , a2 , a3};
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            arr[i][j] = mul[i] * (j + 1);
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 10; j++)
        { 
             printf("the value of arr [i][j] is %d\n", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}