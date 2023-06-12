#include <stdio.h>
void printArray(int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}
int get_max(int a[], int n)
{
    int max = a[0];
    for (int i = 1; i < n; i++)
        if (a[i] > max)
            max = a[i];
    return max;
}
void radixsort(int a[], int n)
{
    int bucket[10][10], bucket_cnt[10];
    int i, j, k, r, NOP = 0, divisor = 1, lar, pass;
    lar = get_max(a, n);
    while (lar > 0)
    {
        NOP++;
        lar /= 10;
    }
    for (pass = 0; pass < NOP; pass++)
    {
        for (i = 0; i < 10; i++)
        {
            bucket_cnt[i] = 0;
        }
        for (i = 0; i < n; i++)
        {
            r = (a[i] / divisor) % 10;
            bucket[r][bucket_cnt[r]] = a[i];
            bucket_cnt[r] += 1;
        }
        i = 0;
        for (k = 0; k < 10; k++)
        {
            for (j = 0; j < bucket_cnt[k]; j++)
            {
                a[i] = bucket[k][j];
                i++;
            }
        }
        divisor *= 10;
       
    }
    printArray(a, n);
}

void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

void bubblesort(int arr[], int n)
{
    int i, j;
    for (i = 0; i < n - 1; i++)

        for (j = 0; j < n - i - 1; j++)
            if (arr[j] > arr[j + 1])
                swap(&arr[j], &arr[j + 1]);
    printArray(arr, n);
}
void selectionsort(int arr[], int n)
{
    int i, j, min_idx;

    
    for (i = 0; i < n - 1; i++)
    {
     
        min_idx = i;
        for (j = i + 1; j < n; j++)
            if (arr[j] < arr[min_idx])
                min_idx = j;

        swap(&arr[min_idx], &arr[i]);
    }
    printArray(arr, n);
}
void quicksort(int arr[], int first, int last)
{
    int i, j, pivot, temp;
    if (first < last)
    {
        pivot = first;
        i = first;
        j = last;
        while (i < j)
        {
            while (arr[i] <= arr[pivot] && i < last)
                i++;
            while (arr[j] > arr[pivot])
                j--;
            if (i < j)
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
        temp = arr[pivot];
        arr[pivot] = arr[j];
        arr[j] = temp;
        quicksort(arr, first, j - 1);
        quicksort(arr, j + 1, last);
    }

}
void merge(int arr[], int l, int m, int r)
{
    int i, j, k;
    int p = m - l + 1;
    int q = r - m;

    
    int L[p], R[q];

   
    for (i = 0; i < p; i++)
        L[i] = arr[l + i];
    for (j = 0; j < q; j++)
        R[j] = arr[m + 1 + j];

    i = 0; 
    j = 0; 
    k = l; 
    while (i < p && j < q)
    {
        if (L[i] <= R[j])
        {
            arr[k] = L[i];
            i++;
        }
        else
        {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

   
    while (i < p)
    {
        arr[k] = L[i];
        i++;
        k++;
    }

    
    while (j < q)
    {
        arr[k] = R[j];
        j++;
        k++;
    }
}


void mergesort(int arr[], int l, int r)
{
    if (l < r)
    {
        
        int m = l + (r - l) / 2;


        mergesort(arr, l, m);
        mergesort(arr, m + 1, r);

        merge(arr, l, m, r);
    }
   
}
void insertionsort(int arr[], int n)
{
    int i, key, j;
    for (i = 1; i < n; i++)
    {
        key = arr[i];
        j = i - 1;

        
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
 printArray(arr,n);
}
void shellsort(int array[], int n)
{
    
    for (int interval = n / 2; interval > 0; interval /= 2)
    {
        for (int i = interval; i < n; i += 1)
        {
            int temp = array[i];
            int j;
            for (j = i; j >= interval && array[j - interval] > temp; j -= interval)
            {
                array[j] = array[j - interval];
            }
            array[j] = temp;
        }
    }
    printArray(array, n);
}
int binarysearch(int arr[], int l, int r, int x)
{
    if (r >= l)
    {
        int mid = l + (r - l) / 2;

        
        if (arr[mid] == x)
            return mid;

       
        if (arr[mid] > x)
            return binarysearch(arr, l, mid - 1, x);

        return binarysearch(arr, mid + 1, r, x);
    }

 
    return -1;
}

int main()
{
    int choice;
    int ar[100], len, c, result, f, l, x;

    while (1)
    {
        printf("Enter number of elements\n");
        scanf("%d", &len);

        printf("Enter %d integers\n", len);

        for (c = 0; c < len; c++)
            scanf("%d", &ar[c]);

        printf("Enter choice");
        printf("\n 1.Bubble Sort\n 2.Selection Sort\n 3.Quick Sort \n 4.Radix Sort \n 5.Merge Sort \n 6.Insertion Sort \n 7.Shell Sort \n 8.Binary Search \n 9.Exit\n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            bubblesort(ar, len);
            break;
        case 2:
            selectionsort(ar, len);
            break;
        case 3:
            quicksort(ar, 0, len - 1);
            printArray(ar,len);
            break;
        case 4:
            radixsort(ar, len);
            break;
        case 5:

            printf("Enter the first and last index of sub array to be sorted");
            scanf("%d %d", &f, &l);
            mergesort(ar, f, l);
            printArray(ar,len);
            break;
        case 6:
            insertionsort(ar, len);
            break;
        case 7:
            shellsort(ar, len);
            break;
        case 8:

            printf("Enter element to be searched for ");
            scanf("%d", &x);
            result = binarysearch(ar, 0, len - 1, x);
            (result == -1)
                ? printf("Element is not present in array \n")
                : printf("Element is present at index %d \n", result);

            break;

        case 9:
            return 0;
        }
    }
    return 0;
}