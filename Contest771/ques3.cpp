
#include <bits/stdc++.h>
using namespace std;

int find(vector<int> &p, int u)
{

    if (p[u] == u)
    {
        return u;
    }

    return p[u] = find(p, p[u]);
}
void merge(vector<int> &arr, int temp[], int left, int mid,
           int right, vector<int> &p)
{
    int i, j, k;

    i = left; /* i is index for left subarray*/
    j = mid;  /* j is index for right subarray*/
    k = left; /* k is index for resultant merged subarray*/
    while ((i <= mid - 1) && (j <= right))
    {
        if (arr[i] <= arr[j])
        {
            temp[k++] = arr[i++];
        }
        else
        {
            int idx = i;
            while (idx <= (mid - 1))
            {

                p[find(p, arr[idx])] = find(p, arr[j]);
                idx++;
            }

            temp[k++] = arr[j++];
        }
    }

    /* Copy the remaining elements of left subarray
(if there are any) to temp*/
    while (i <= mid - 1)
        temp[k++] = arr[i++];

    /* Copy the remaining elements of right subarray
    (if there are any) to temp*/
    while (j <= right)
        temp[k++] = arr[j++];

    /*Copy back the merged elements to original array*/
    for (i = left; i <= right; i++)
        arr[i] = temp[i];
}

void _mergeSort(vector<int> &arr, int temp[], int left, int right, vector<int> &p)
{
    int mid;
    if (right > left)
    {
        /* Divide the array into two parts and
        call _mergeSortAndCountInv()
        for each of the parts */
        mid = (right + left) / 2;

        /* Inversion count will be sum of
        inversions in left-part, right-part
        and number of inversions in merging */
        _mergeSort(arr, temp, left, mid, p);
        _mergeSort(arr, temp, mid + 1, right, p);

        /*Merge the two parts*/
        merge(arr, temp, left, mid + 1, right, p);
    }
}

void mergeSort(vector<int> &arr, int array_size, vector<int> &parent)
{
    int temp[array_size];
    _mergeSort(arr, temp, 0, array_size - 1, parent);
}

int solve()
{
    int n;
    cin >> n;
    vector<int> vec(n);
    for (int i = 0; i < n; i++)
    {
        cin >> vec[i];
    }
    vector<int> parent(n + 1);
    iota(parent.begin(), parent.end(), 0);

    mergeSort(vec, n, parent);

    int comp = 0;

    for (int i = 1; i <= n; i++)
    {

        if (i == find(parent, i))
        {

            comp++;
        }
    }

    cout << comp << endl;

    return 0;
}

// Driver code
int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        solve();
    }

    return 0;
}
