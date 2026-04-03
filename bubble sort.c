#include<stdio.h>

int main (){
int myArray[]={12,46,87,98,11,23};
int n = sizeof(myArray) / sizeof(myArray[0]);
for (int i=0; i<n-1;i++){
for (int j=0; j<n-i-1; j++){
if (myArray[j]>myArray[j+1]){
int temp = myArray[j];
 myArray[j] = myArray[j+1];
 myArray[j+1] = temp;
}
}
}
printf("Sorted array:");
for (int i=0; i<n;i++){
printf("%d\n", myArray[i]);
}
return 0;
}
