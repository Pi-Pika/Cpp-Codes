/* Dynamic Programming C/C++ implementation of LIS problem */
#include <bits/stdc++.h>
using namespace std;

/* lis() returns the length of the longest increasing
  subsequence in arr[] of size n */
int lis(vector<int> arr, int size)
{
    int *lis, i, j, max = 0;
    lis = (int*)malloc(sizeof(int) * size);

    /* Initialize LIS values for all indexes */
    for (i = 0; i < size; i++)
    {
        lis[i] = 1;
    }
    /* Compute optimized LIS values in bottom up manner */
    for (i = 1; i < size; i++)
    {
        for (j = 0; j < i; j++)
        {
            if (arr[i] > arr[j] && lis[i] < lis[j] + 1)
            {
                lis[i] = lis[j] + 1;
            }
        }
    }
    /* Pick maximum of all LIS values */
    for (i = 0; i < size; i++)
    {
        if (max < lis[i])
        {
            max = lis[i];
        }
    }
    /* Free memory to avoid memory leak */
    free(lis);

    return max;
}

/* Driver program to test above function */
int main()
{
    vector<int> arr = { 10, 22, 9, 33, 21, 50, 41, 60 };
    int size = arr.size();
    cout <<"Length of LIS is " << lis(arr, size) << endl;
    return 0;
}
