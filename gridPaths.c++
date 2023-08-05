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
  
 
 int32_t n;
 cin>>n;
 vector<string>vec;
 for(int i=0;i<n;i++)
 {
    string s;
    cin>>s;
    vec.push_back(s);
 }
 
 
vector<vector<int>>dp(n,vector<int>(n,0));
 
if(n==1)
{
    if(vec[0][0]=='*')
    {
        cout<<"0"<<endl;
    }else
    {
        cout<<"1"<<endl;
    }
}else{
 
dp[0][0]=1;
 
for(int i=0;i<n;i++)
{
    for(int j=0;j<n;j++)
    {
        if(vec[i][j]=='.')
        {
            if(i!=0 && vec[i-1][j]!='*')
            {dp[i][j]+=dp[i-1][j];
            }
            if(j!=0 && vec[i][j-1]!='*')
            {
                dp[i][j]+=dp[i][j-1];
            }
        }
        dp[i][j]%=mod;
    }
}
 
cout<<dp[n-1][n-1]<<endl;
}
 
 
      return 0;
  }
