#include <bits/stdc++.h> 

int minimumNet(int n, int k, vector<bool> arr)
{
   // Write your code here.
   int least=INT_MAX, sum=0, i=0, j=0;
   while(j<n)
   {
       if((j-i)<k)
       {
           sum=sum+arr[j] ;
           j++;            
       }
       else
       {
           if(sum<k){
               sum=sum+arr[j];
               j++;
           }
           if(sum==k){
               least=min(least, j-i);
               sum=sum-arr[i];
               i++;
           }
       }
   }
   if(sum==k){
       least=min(least, j-i);
   }
   if(least==INT_MAX){
       return -1;
   }
   else{
       return least;
   }
   
}
