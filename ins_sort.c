#include <stdio.h>

void main() {
int i,j,k,temp,t;
int a[20];
printf("Enter the number of elements -: ");
scanf("%d",&t);
for(i = 0; i<t;i++){
    printf("Enter value of array %d = ",i+1);
    scanf("%d",&a[i]);
}
for(i=0;i<t;i++){
 for(j=i+1;j<t;j++){
 if(a[i]>a[j]){
    temp = a[j];
    for(k = j; k>=i; k--)
    {
        a[k] = a[k-1];
    }
 
    }
    else if(a[j]>a[i]){
        continue;
        }
    else{
        break;
}
    a[i] = temp;
}}

for(i = 0; i<t;i++){
    printf("array %d = %d\n",i,a[i]);
}

}
