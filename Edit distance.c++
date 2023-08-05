 #include<bits/stdc++.h>
 
 #define int long long int
 #define F first
 #define S second
 #define pb push_back
 #define que_max priority_queue<int>
 #define que_min priority_queue<int,vector<int>,greater<int>>;
  #define endl "\n"
  using namespace std;
  
  int n,m;
  string a,b;
  int memo[5010][5010];
 
  int dp(int i,int j)
  {
      if(i==n && j==m)
      {
        return 0;
      }
 
      if(i==n)
      {
        if(j<m)
        {
            return (m-j);
        }else
        {
            return (INT_MAX);
        }
      }
 
      if(j==m)
      {
        if(i<n)
        {
            return (n-i);
        }else{
            return INT_MAX;
        }
      }
 
      int &ans=memo[i][j];
 
      if(ans!=-1)
      {
        return ans;
      }
      ans=INT_MAX;
 
 
 
      if(a[i]!=b[j])
      {
        ans=min(ans,1+dp(i+1,j+1));
        ans=min(ans,1+dp(i,j+1));
        ans=min(ans,1+dp(i+1,j));
      }else
      {
        ans=min(ans,dp(i+1,j+1));
      }
 
    return ans;
 
 
  }
 
 
 
 
 
  
  int32_t main()
  {
  #ifndef ONLINE_JUDGE
      freopen("input.txt","r",stdin);
      freopen("output.txt","w",stdout);
  #endif
  cin>>a;
  cin>>b;
  n=a.size();m=b.size();
  memset(memo,-1,sizeof(memo));
 
  cout<<dp(0,0)<<endl;
 
 
 
      return 0;
  }
