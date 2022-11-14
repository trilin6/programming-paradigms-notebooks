#include <stdio.h>
#include <stdlib.h>

int compare (const void *, const void *); 

int main() {
  int arr[] = {52, 14, 50, 48, 13};
  int num, width, i;
  num = sizeof(arr)/sizeof(arr[0]);
  width = sizeof(arr[0]);
  qsort(arr, num, width, compare);
  for (i = 0; i < 5; i++)
    printf("%d ", arr[i]);
  printf("\n");
  return 0;
}

int compare (const void *arg1, const void *arg2) {
  return *(int *)arg1 - *(int *)arg2;
}
