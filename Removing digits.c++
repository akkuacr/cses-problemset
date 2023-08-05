 #include<bits/stdc++.h>
 
 #define int long long int
 #define F first
 #define S second
 #define pb push_back
 #define que_max priority_queue<int>
 #define que_min priority_queue<int,vector<int>,greater<int>>;
  #define endl "\n"
  using namespace std;
  
  int memo[1000001];
 
  vector<int>get_digits(int n)
  {
    map<int,int>mp;
    while(n>0)
    {
        int rem=n%10;
        mp[rem]++;n/=10;
    }
    vector<int>ans;
    for(auto it:mp)
    {   
        if(it.first!=0)
       {
        ans.push_back(it.first);
       }
    }
    return ans;
  }
 
  
 
 
 
 
 
 
 
  int32_t main()
  {
  #ifndef ONLINE_JUDGE
      freopen("input.txt","r",stdin);
      freopen("output.txt","w",stdout);
  #endif
  
 memset(memo,-1,sizeof(memo));
 int n;
 cin>>n; 
  vector<int>vec=get_digits(n);
 
 
 
  vector<int>dp(n+1,INT_MAX);
  dp[0]=0;
  for(int i=1;i<=n;i++)
  {
    vector<int>res=get_digits(i);
 
     for(auto it:res)
     {
        dp[i]=min(dp[i],dp[i-it]+1);
     }
 
  }
 
 
 
    cout<<dp[n]<<endl;
 
      return 0;
  }
