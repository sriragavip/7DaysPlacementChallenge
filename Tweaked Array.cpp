#include <bits/stdc++.h> 
vector<int> tweakTheArray(vector<int> arr, int n){

   int ts=0;

   vector<int> v(n);

   for(int i=0;i<n;i++){

       ts+=arr[i];

   }

   

   for(int j=0;j<n;j++){

       v[j]=ts-arr[j];

   }

   return v;

}