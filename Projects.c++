
// intuition yeh h ki jha pe 'b[i]' ka upper bound aega wha tak ka maximum dekhna  apne ko ho gya



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
     vector<pair<int,int>>vec;
     vector<int>vec1;
    // multimap<int,int>vec1,vec2;
   map<pair<int,int>,int>mp;
   vector<int>dp(n+1,0);
   for(int i=0;i<n;i++)
   {

       int x,y,re;
       cin>>x>>y>>re;
       vec.push_back({x,y});

       vec1.push_back(x);

       mp[{x,y}]=max(mp[{x,y}],re);    
   }

   sort(vec.begin(),vec.end());
   sort(vec1.begin(),vec1.end());

   int mx=vec[n-1].first;


    for(int i=n-1;i>=0;i--)
    {   
        int y=vec[i].second;
        auto it=upper_bound(vec1.begin(),vec1.end(),y)-vec1.begin();
        dp[i]=dp[it]+mp[{vec[i].first,vec[i].second}];
        dp[i]=max(dp[i],dp[i+1]);

        
    } 

    cout<<dp[0]<<endl;



 
      return 0;
  }
