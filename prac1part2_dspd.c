#include<stdio.h>
int binarysearch(int arr[],int num,int len){
    int l=0,r=len-1,i=0;
    int m;

    while(l<=r){
            m=(l+r)/2;
        if(arr[m]==num)
            return m;
        else if(arr[m]>num)
            r=m-1;
        else
            l=m+1;
    }
    return -1;
}

int main(){
    int n;
    printf("Enter the number of elements in array: ");
    scanf("%d",&n);

    int a[n];
    printf("Enter the elements of array in ascending order: ");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }

    printf("Given Array is: ");
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }

    int x;
    printf("\n\nEnter the elements to be searched: ");
    scanf("%d",&x);

    int b=binarysearch(a,x,n);
    if(b==-1)
        printf("element not found");
    else
        printf("Element %d is found at index %d.",x,b);
    return 0;
}
