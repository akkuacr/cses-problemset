


// ye optimise code h jo kayi problems m use ho jaegi




#include<bits/stdc++.h>
 
 #define int long long int
 #define F first
 #define S second
 #define pb push_back
 #define que_max priority_queue<int>
 #define que_min priority_queue<int,vector<int>,greater<int>>;
  #define endl "\n"
  using namespace std;
  
  int32_t main()
  {
  #ifndef ONLINE_JUDGE
      freopen("input.txt","r",stdin);
      freopen("output.txt","w",stdout);
  #endif
  
 
 
   int n;
   cin>>n;
   vector<int>arr;
   for(int i=0;i<n;i++)
   {
    int x;cin>>x;arr.pb(x);
   }

   vector<int>lis;

   lis.push_back(arr[0]);
   for(int i=1;i<n;i++)
   {
      auto it=lower_bound(lis.begin(),lis.end(),arr[i])-lis.begin();

      if(it==lis.size()){lis.push_back(arr[i]);}
      else lis[it]=arr[i];
   }

   cout<<lis.size()<<endl;




      return 0;
  }
