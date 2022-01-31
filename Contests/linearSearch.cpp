#include <bits/stdc++.h>
#include <iostream>
#include <time.h>
#include <dos.h>

using namespace std;

int linearSearch(int arr[], int n, int x)
{

    for (int i = 0; i < n; i++)
    {
          
        if (arr[i] == x)
            return i;
    }

    return -1;
}
int main(int argc, char const *argv[])
{
    clock_t start, end;
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    start = clock();
    linearSearch(arr, 10, 10);
    end = clock();

    cout << start << " " << end << endl;
    return 0;
}
