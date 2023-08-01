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
  
 
     int n;
     cin>>n;
     vector<int>dp(n+1,0);
     dp[0]=1;
     for(int i=1;i<=n;i++)
     {
        for(int j=i-1;j>=max(i-6,(int)0);j--)
        {
            dp[i]+=dp[j];dp[i]%=mod;
        }

      //  cout<<dp[i]<<endl;
     }

     cout<<dp[n]<<endl;

 
      return 0;
  }
