ye problem pehle wale ka follow up h.....isme distinct types btane the do humne loop vector m isliye lgaya qki .....ek baar  m particular element se bnne wale aa jaye
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
  
 
 int n,x;
 cin>>n>>x;
 
 
 vector<int>vec;
 for(int i=0;i<n;i++)
 {
    int x;
    cin>>x;vec.push_back(x);
 }
 
 
 vector<int>dp(x+1,0);
 
 dp[0]=1;
 
 for(auto it:vec)
 {
    int y=it;
    for(int y=1;y<=x;y++)
    {
        if((y-it)>=0)
        {
            if(dp[y-it]>0)
            {
                dp[y]+=dp[y-it];
                dp[y]%=mod;
            }
        }
    }
 }
 
 cout<<dp[x]<<endl;
 
 
 
 
 
 
 // cout<<dp[x]<<endl;
      return 0;
  }
