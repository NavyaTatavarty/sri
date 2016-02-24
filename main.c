#include<stdio.h>
#include</home/bossmool/navya/main.h>
extern int sort1();
int array[20];
 int main()
  {
    int n,i;
    printf("Enter the size of the array");
    scanf("%d",&n);
    printf("Enter the array elements:\n");
    for(i=0;i<n;i++)
     {
       scanf("%d",&array[i]);
     }
    sort1  (array,n);
    return 0;
  }
 
