 #include<bits/stdc++.h>
 
 #define int long long int
 #define F first
 #define S second
 #define pb push_back
 #define que_max priority_queue<int>
 #define que_min priority_queue<int,vector<int>,greater<int>>;
  #define endl "\n"
  using namespace std;
   vector<int>coins;
   vector<int>memo;
   const int mod=1e9+7;

   int dp(int x)
   {
      if(x<0)
      {
        return 0;
      }
      if(x==0)
      {return 1;

      }
      if(memo[x]!=-1)
      {
        return memo[x];
      }

      int mx=0;
      for(auto it:coins)
      {
        mx+=dp(x-it);
        mx%=mod;
      }


   return memo[x]=mx;

   }
  
  int32_t main()
  {
  #ifndef ONLINE_JUDGE
      freopen("input.txt","r",stdin);
      freopen("output.txt","w",stdout);
  #endif
  
 
 int n,x;
 cin>>n>>x;
 
 for(int i=0;i<n;i++)
 {
    int x1;
    cin>>x1;
    coins.push_back(x1);
 }
 memo.resize(x+1,-1);
 

  int y=dp(x);
  if(y>=INT_MAX)
  {
    y=-1;
  }

  cout<<y<<endl;




 
      return 0;
  }
