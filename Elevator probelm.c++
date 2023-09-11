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
  
 
 int x,n;
 cin>>x>>n;
 int weight[n];
 for(int i=0;i<n;i++)
 {
  cin>>weight[i];
 }
 
 pair<int,int>dp[1<<n];
 
 //best[mask].first=f[mask]
 //best[mask].second=g[mask]
 
  dp[0]={1,0};
 
  for(int mask=1;mask<(1<<n);mask++)
  {
     dp[mask]={n,0};
     for(int y=0;y<n;y++)
     {
        if((mask>>y)&1)
        {  
           int new_mask=mask^(1<<y);
           pair<int,int>option=dp[new_mask];
 
           if(option.second+weight[y]<=x)
           {
            option.first=option.first;
            option.second+=weight[y];
           }else
           {
               //exclude the yth person
               // new ride with y
 
               option.first++;
               option.second=weight[y];
           }
 
 
           dp[mask]=min(dp[mask],option);
 
 
        }
     }
  }
 
  cout<<(dp[(1<<n)-1].first)<<endl;
 
 
 
 
 
 
 
 
 
 
 
      return 0;
  }
