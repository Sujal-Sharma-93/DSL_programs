#include <stdio.h>
int main (){
    int a[100],n,temp, min;
    printf("Enter no of elements :");
    scanf("%d",&n);
    printf("Enter your elements :");
    for (int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n-1;i++){
     min = i;
     for (int j = i + 1; j < n; j++) {
        if (a[j] < a[min]) {
            min = j;
        }
     } temp = a[min];
       a[min] = a[i];
       a[i] = temp;
    }
    printf("Your sorted array is : ");
    for (int i = 0; i < n; i++) {
    printf("%d ", a[i]);
    }
return 0;
}