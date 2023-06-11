#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int *random(int length)
{
    int *arr = malloc(length * sizeof(int));
    srand(time(NULL));
    for (int i = 0; i < length; i++) {
        arr[i] = rand() % 100; // Gi? s? gi?i h?n c?a s? nguyên là 0-99
    }
    return arr;
}

int tim(int *arr, int length, int n)
{
    for (int i = 0; i < length; i++) {
        if (arr[i] == n) {
            return i;
        }
    }
    return -1;
}

int main()
{
     // Sinh m?ng ng?u nhiên
    int length = 10;
    int *arr = random(length);
    printf("Mang ngau nhien:\n");
    for (int i = 0; i < length; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // T?m ki?m v? trí xu?t hi?n ð?u tiên c?a s? n trong m?ng
    int n ;
    printf("nhap n");
    scanf("%d",&n);
    int index = tim(arr, length, n);
    if (index < 0) {
        printf("Khong tim thay %d trong mang\n", n);
    } else {
        printf("%d xuat hien tai vi tri %d trong mang\n", n, index);
    }

    // Gi?i phóng b? nh?
    free(arr);

    return 0;
}

