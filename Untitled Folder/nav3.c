#include<stdio.h>

int sort1(int arr[],int x)
 {
   int temp,i,j;
   for(i=0;i<=x;i++)
    {
      for(j=0;j<=(x-i-1);j++)
       {
         if(arr[j]>arr[j+1])
           {
             temp=arr[j];
             arr[j]=arr[j+1];
             arr[j+1]=temp;
           }
         }
      }
printf("The sorted elements are:\n");
     for(i=0;i<=x;i++)
      printf("%d",arr[i]);
     return 0;
 }
