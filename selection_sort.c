#include<stdio.h>
void main(){
int i,j,temp,n;
int a[10];
    printf("Enter the number of elements -: ");
    scanf("%d",&n);
    for(i = 0; i<n;i++)
    {
        printf("Enter the value of Array %d = ",i+1);
        scanf("%d",&a[i]);
    }
for(i = 0;i<n;i++){
  for(j=0;j<n;j++){
    if(a[i]<a[j]){
      
        temp = a[j];
        a[j] = a[i];
        a[i] = temp;
    }
  }
}

for(i = 0; i<n;i++)
    {
        printf("Array %d = %d\n",i+1,a[i]);
    }
}
