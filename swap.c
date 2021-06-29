#include<stdio.h>

void swap_max(int x[], int l, int n)
  {
      int max=x[n];
      int index=0;
      
      for(int i=n;i<l;i++)
      {
         if(x[i]>max)
         {
           max=x[i];
           index=i;
          }
     }
      
      
      
      x[index]=x[n]; 
      x[n]=max; 
  }
  
  void ssort(int arr[], int l)
  {
    for(int i=0;i<l;i++)
    {
      swap_max(arr,l,i);
     }
  
  }
