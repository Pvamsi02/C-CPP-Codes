// #include <stdio.h>
// int BinarySearch(int arr[], int num, int l, int r)
// {
//     while (l <= r)
//     {
//         int mid = l + (r - l) / 2;
//         if (arr[mid] == num)
//         {
//             return mid;
//         }
//         if (arr[mid] > num)
//         {
//             return BinarySearch(arr, num, l, mid - 1);
//         }
//         else
//         {
//             return BinarySearch(arr, num, mid + 1, r);
//         }
//     }
//     return -1;
// }

// int main()
// {
//     int n;
//     scanf("%d", &n);
//     int arr[n];
//     int i;
//     for (i = 0; i < n; i++)
//     {
//         scanf("%d", &arr[i]);
//     }
//     int num;
//     int a;
//     scanf("%d", &num);
//     for (i = 0; i < n; i++)
//     {
//         if (arr[i] > arr[i + 1])
//         {
//             a = arr[i];
//             arr[i] = arr[i + 1];
//             arr[i + 1] = a;
//         }
//     }
//     int bc = BinarySearch(arr, num, 0, n - 1);
//     if (bc == -1)
//     {
//         printf("Not found");
//     }
//     else
//     {
//         printf("found");
//     }

//     return 0;
// }
#include <stdio.h>
int BinarySearch(int arr[], int num, int l, int r)
{
    while (l <= r)
    {
        int mid = l + (r - l) / 2;
        if (arr[mid] == num)
        {
            return mid;
        }
        if (arr[mid] < num)
        {
            l = mid + 1;
        }
        else
        {
            r = mid - 1;
        }
    }
    return -1;
}

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    int i;
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int num;
    int a;
    scanf("%d", &num);
    for (i = 0; i < n; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            a = arr[i];
            arr[i] = arr[i + 1];
            arr[i + 1] = a;
        }
    }
    int bc = BinarySearch(arr, num, 0, n - 1);
    if (bc == -1)
    {
        printf("Not found");
    }
    else
    {
        printf("found");
    }

    return 0;
}