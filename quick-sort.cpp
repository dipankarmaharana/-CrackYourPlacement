#include <bits/stdc++.h>
using namespace std;

void swap(int arr[], int i, int j) {
   int temp = arr[j];
   arr[j] = arr[i];
   arr[i] = temp;
}

int partition(int arr[], int l, int r) {
   int pivot = arr[r];
   int i = l - 1;
   for (int j = l; j < r; ++j)
   {
      if (arr[j] < pivot) {
         i++;
         swap(arr, arr[i], arr[j]);
      }
   }
   swap(arr, i + 1, r);
   return i + 1;
}

void quicksort(int arr[], int l, int r) {
   if (l < r) {
      int pivot = partition(arr, l, r);
      quicksort(arr, l, pivot - 1);
      quicksort(arr, pivot + 1, r);
   }
}


int main() {

   int n;
   cin >> n;
   int arr[n];

   for (int i = 0; i < n; ++i)
   {
      cin >> arr[i];
   }

   quicksort(arr, 0, n - 1);

   for (int i = 0; i < n; ++i)
   {
      cout << arr[i] << " ";
   }

   return 0;
}
