#include <bits/stdc++.h>



{

// A function to implement bubble sort
void bubbleSort (int arr[], int n)
{

  int right = n-1;
  int temp = 0;
  while(right > 0)
{
        int k = 0;
        for(int i = 0; i < right; i ++)
		   if(a[i+1] < a[i])
		   {
		   	 temp = a[i+1];
		   	 a[i+1] = a[i];
		   	 a[i] = temp;
		   	 k = i;
		   	 
		   }
        right = k;
}
}
	
   
