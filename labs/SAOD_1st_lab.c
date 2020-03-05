#include <stdio.h>

int InsertionSort(int arr[], int n) {
  int i, key, j;
  for (i = 1; i < n; i++) {
    key = arr[i];
    j = i - 1;
    while (j >= 0 && arr[j] > key) {
      arr[j + 1] = arr[j];
      j = j - 1;
    }
    arr[j + 1] = key;
  }
  return arr[];
}

int CountingSort(int massive[], int size) {
  int new_mass[] = massive[];
  for (int i = 0; i < size; i++) {
    int second_mass[i] = 0;
  }
  for (i = 0; i < size - 1; i++) {
    second_mass[massive[i]] = second_mass[massive[i]] + 1;
  }
  for (i = 1; i < size; i++) {
    second_mass[i] = second_mass[i] + second_mass[i - 1];
  }
  for (i = size - 1; i != 0; i--) {
    second_mass[massive[i]] = second_mass[massive[i]] - 1;
    new_mass[second_mass[massive[i]]] = massive[i];
  }
}

int MergeSort(int massive[], int l, int r) {
    int mid;
    for (l < r; l++)
    {
        mid = (l + r) / 2;
        MergeSort(massive, l, mid);
        MergeSort(massive, mid + 1, r);
        Merge(massive, l, mid, r);
    }
}

int Merge(int massive[], int l, int mid, int r) {
    int mass_B[];
    for (int i = l; i < r; i++) {
        mass_B[i] = massive[i];
        int high = mid + 1;
    }
    while (l <= mid && high <= r) {
        if (mass_B[l] <= mass_B[r]) {
            massive[i] = mass_B[high];
            l = l + 1;
        }
        else {
            massive[i] = mass_B[high];
            r = r + 1;
        }
        i = i + 1;
    }
    while (l <= mid) {
        massive[i] = mass_B[l];
        l = l + 1;
        i = i + 1;
    }
    while (high <= r) {
        massive[i] = mass_B[l];
        r = r + 1;
        i = i + 1;
    }
}

int main() {
  int massive[];
  int sorted_mass[];
  int size;
  printf("Enter massive size");
  scanf("&d", &size);
  printf("Enter massive");
  for (int i = 0; i <= size; i++) {
    scanf("%d", &massive[i]);
  }
  sorted_mass[] = InsertionSort(arr, size);
  CountingSort(arr, size);
  MergeSort(arr, 0, size - 1);
  printf("Sorted massive: ");
  for (i = 0; i <= size; i++) {
    printf("%d/t", sorted_mass[i]);
  }
}