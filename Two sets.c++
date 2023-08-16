
//ye variation h subset sum ki



#include<bits/stdc++.h>
 
 #define int long long int
 #define F first
 #define S second
 #define pb push_back
 #define que_max priority_queue<int>
 #define que_min priority_queue<int,vector<int>,greater<int>>;
  #define endl "\n"
  using namespace std;
  int mod=1e9+7;
  int sum1,n;
 
 
   
 
vector<vector<int>>memo;
 
  
  
  int32_t main()
  {
  #ifndef ONLINE_JUDGE
      freopen("input.txt","r",stdin);
      freopen("output.txt","w",stdout);
  #endif
  
   float s1;
   cin>>n;sum1=(n*(n+1))/4;
   s1=(n*(n+1))/(float)4;
   memo.resize(n+1,vector<int>(sum1+1,0));
    
 
 
    memo[0][0]=1;
 
 
 
 
   if((s1-sum1)>0){
 
    cout<<"0"<<endl;
   }else{
    
 
//    cout<<sum1<<endl; 
 
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=sum1;j++)
        {
            memo[i][j]=memo[i-1][j];
            if((j-i)>=0){memo[i][j]+=memo[i-1][j-i];}
            memo[i][j]%=mod;
        }
    }
 
     
 
    cout<<memo[n][sum1]<<endl;
 }
   
 
 
      return 0;
  }
SHARE CODE TO OTHERS
