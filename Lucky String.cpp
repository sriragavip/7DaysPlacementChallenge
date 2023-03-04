#include <bits/stdc++.h> 
int makeLucky(string s, int n)

{

   // Write your code here.

   int count = 0;

   for(int i =1;i<n-1;i++){

       if(s[i] == s[i-1] && s[i] == s[i+1])count++;

   }

   return count;

}

 
