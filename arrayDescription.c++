// problem link:-https://cses.fi/problemset/task/1746
// approach yeh h (n*m) ki matrix bnao aur isme yeh dekho ki qa qa possible bn skte h

// code:-


 #include<bits/stdc++.h>
 
 #define int long long int
 #define F first
 #define S second
 #define pb push_back
 #define que_max priority_queue<int>
 #define que_min priority_queue<int,vector<int>,greater<int>>;
  #define endl "\n"
  using namespace std;
  const int mod=1e9+7;
  
  int32_t main()
  {
  #ifndef ONLINE_JUDGE
      freopen("input.txt","r",stdin);
      freopen("output.txt","w",stdout);
  #endif
 
 
      int n,m;
      cin>>n>>m;
      vector<int>values;values.push_back(0);
      for(int i=1;i<=n;i++)
      {
        int x;
        cin>>x;
        values.pb(x);
      }
      vector<vector<int>>dp(n+1,vector<int>(m+2,0));
      if(values[1]!=0)
      {
        dp[1][values[1]]=1;
      }else
      {
        for(int i=1;i<=m;i++)
        {
            dp[1][i]=1;
        }
      }
 
      for(int i=1;i<=n;i++)
      {
       if(values[i]==0){
        for(int j=1;j<=m;j++)
        {
 
            
                dp[i][j]+=dp[i-1][j];dp[i][j]%=mod;
                dp[i][j]+=dp[i-1][j-1];dp[i][j]%=mod;
                dp[i][j]+=dp[i-1][j+1];dp[i][j]%=mod;
        }
        }else
        {
            dp[i][values[i]]+=dp[i-1][values[i]];dp[i][values[i]]%=mod;
            dp[i][values[i]]+=dp[i-1][values[i]-1];dp[i][values[i]]%=mod;
            dp[i][values[i]]+=dp[i-1][values[i]+1];dp[i][values[i]]%=mod;
        }
      }
      int sm=0;
      for(int i=0;i<=m;i++)
      {
        sm+=dp[n][i];
        sm%=mod;
 
      }
 
      cout<<sm<<endl;
 
  
 
 
 
      return 0;
  }

