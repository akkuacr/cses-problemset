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
 vector<int>arr(n);
 int s=0;
 
  for(int i=0;i<n;i++)
  {
    cin>>arr[i];
    s+=arr[i];
  }
 
 
 
 
  vector<vector<int>>memo(2,vector<int>(s+1,0));
 
  memo[0][0]=1;
 
  for(int i=1;i<=n;i++)
  {
    for(int j=0;j<=s;j++)
    {
        memo[1][j]=memo[0][j];
        if((j-arr[i-1])>=0)
        {
            memo[1][j]|=memo[0][j-arr[i-1]];
        }
    }
 
 
    for(int j=0;j<=s;j++)
    {
        memo[0][j]=memo[1][j];
    }
 
 
  }
 
  vector<int>res;
  for(int i=1;i<=s;i++)
  {
     if(memo[1][i]>0)
     {res.push_back(i);
 
     }
  }
 
 
  cout<<res.size()<<endl;
 
 
  for(int i=0;i<res.size();i++)
  {
    cout<<res[i]<<" ";
  }cout<<endl;
 
 
 
 
 
 
 
 
      return 0;
  }
