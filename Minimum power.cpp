#include <bits/stdc++.h> 
bool ispossible(vector<int> l,int mid,int k)

{

    int cnt=0;

    int next=-1;

    for(int i=0;i<l.size();i++)

    {

        if(l[i]>next)

        {

            cnt++;

            next=l[i]+2*mid;

        }

    }

   

    return cnt<=k;

}

int minimumPower(int N, int K, vector<int> L)

{

// Write your code here.

    int l=0;

    int r=*max_element(L.begin(),L.end());

    sort(L.begin(),L.end());

    int ans=0;

   

    while(l<=r)

    {

        int mid=(l+r)/2;

        if(ispossible(L,mid,K))

        {

            ans=mid;

            r=mid-1;

        }

        else

            l=mid+1;

    }

   

    return ans;

}