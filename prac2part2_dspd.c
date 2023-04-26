#include<stdio.h>
int main(){
     int n;
     printf("Enter the number of elements in array: ");
     scanf("%d",&n);

     int a[n];
     printf("Enter the elements of array:  ");
     for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
     }

     printf("Elements of array are: ");
      for(int i=0;i<n;i++){
        printf("%d ",a[i]);
     }
     int min_idx,i,j;
     for(int i=0;i<n-1;i++)
    {
        min_idx = i;
        for (int j=i+1;j<n;j++)
        {
          if (a[j]<a[min_idx])
              min_idx = j;
        }
        if (min_idx!=i){
            int temp=a[min_idx];
            a[min_idx]=a[i];
            a[i]=temp;
        }
    }
     printf("\n\nSorted array:  ");
      for(int i=0;i<n;i++){
        printf("%d  ",a[i]);
     }

}

