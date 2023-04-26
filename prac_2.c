#include <stdio.h>
int binarySearch(int a[], int beg, int end, int num)
{
    int mid;
    if(end >= beg)
    {        mid = (beg + end)/2;
        if(a[mid] == num)
        {
            return mid+1;
        }
        else if(a[mid] < num)
        {
            return binarySearch(a, mid+1, end, num);
        }
        else
        {
            return binarySearch(a, beg, mid-1, num);
        }
    }
    return -1;
}
int main() {
  int n;
  printf("Enter the number of element in array: ");
  scanf("%d",&n);
  int a[n];
  printf("Enter the elements of array: ");
  for(int i=0;i<n;i++){
    scanf("%d",&a[i]);
  }
  int num;
  printf("Enter the number to be searched.");
  scanf("%d",&num);
  int res = binarySearch(a, 0, n-1,num); A

  printf("The elements of the array are - ");
  for (int i = 0; i < n; i++)
  printf("%d ", a[i]);
  printf("\nElement to be searched is - %d",num);
  if (res == -1)
  printf("\nElement is not present in the array");
  else
  printf("\nElement is present at %d position of array", res);
  return 0;
}
