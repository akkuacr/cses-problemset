// yeh fractional knapsack ki problem h but isme space optimization lagega

 #include<bits/stdc++.h>
 
 #define int long long int
 #define F first
 #define S second
 #define pb push_back
 #define que_max priority_queue<int>
 #define que_min priority_queue<int,vector<int>,greater<int>>;
  #define endl "\n"
  using namespace std;
  
  // const int N=1e5+10;
  // vector<int>G[N];int le
 
  
  int32_t main()
  {
  #ifndef ONLINE_JUDGE
      freopen("input.txt","r",stdin);
      freopen("output.txt","w",stdout);
  #endif
  
  
 int n,x;
 cin>>n>>x;
  
 vector<int>h,s;
 h.push_back(-1);s.push_back(0);
 for(int i=0;i<n;i++)
 {
    int x;cin>>x;h.push_back(x);
 } 
 for(int i=0;i<n;i++)
 {
    int x;cin>>x;s.push_back(x);
 }
 
 int dp[2][x+1];
 memset(dp,0,sizeof(dp));
 
 for(int i=1;i<=n;i++)
 {
    for(int j=1;j<=x;j++)
    {
        int x1=dp[0][j],y=0;
 
        if(j>=h[i])
        {
            y=dp[0][j-h[i]]+s[i];
        }
 
      dp[1][j]=max(x1,y);
    }
 
    for(int j=0;j<=x;j++)
    {
        dp[0][j]=dp[1][j];
    }
 }
 
 
 // for(int i=0;i<=n;i++)
 // {
 //    for(int j=0;j<=x;j++)
 //    {
 //        cout<<dp[i][j]<<" ";
 //    }cout<<endl;
 // }
 
 cout<<dp[1][x]<<endl;
 
 
 
 
 
 
 
 
 
 
      return 0;
  }
