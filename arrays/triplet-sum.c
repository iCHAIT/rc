#include <stdio.h>

void quickSort(int *, int, int);

bool find3Numbers(int A[], int arr_size, int sum)
{

    int l, r;

    quickSort(A, 0, arr_size-1);

    for(int i=0;i<arr_size-2;i++)
    {
        l = i+1;
        r = arr_size-1;

        while(l<r)
        {
        if((A[i] + A[l] + A[r]) == sum)
            printf("%d, %d, %d", A[i], A[l], A[r]);

        else if ((A[i] + A[l] + A[r]) < sum)
            l++;

        else
            r--;
        }

    }

    return false;

}

void exchange(int *a, int *b)
{
    int temp;
    temp = *a;
    *a   = *b;
    *b   = temp;
}

int partition(int A[], int si, int ei)
{
    int x = A[ei];
    int i = (si - 1);
    int j;

    for (j = si; j <= ei - 1; j++)
    {
        if(A[j] <= x)
        {
            i++;
            exchange(&A[i], &A[j]);
        }
    }
    exchange (&A[i + 1], &A[ei]);
    return (i + 1);
}

void quickSort(int A[], int si, int ei)
{
    int pi;
    if(si < ei)
    {
        pi = partition(A, si, ei);
        quickSort(A, si, pi - 1);
        quickSort(A, pi + 1, ei);
    }
}

int main()
{
    int A[] = {1, 4, 45, 6, 10, 8};
    int sum = 22;
    int arr_size = sizeof(A)/sizeof(A[0]);

    find3Numbers(A, arr_size, sum);

    getchar();
    return 0;
}