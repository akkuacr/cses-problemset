 #include<bits/stdc++.h>
 
 #define int long long int
 #define F first
 #define S second
 #define pb push_back
 #define que_max priority_queue<int>
 #define que_min priority_queue<int,vector<int>,greater<int>>;
  #define endl "\n"
  using namespace std;
  

  int n;
  vector<int>vec;
  int memo[5010][5010];


  int dp(int i,int j)
  {
       

         if(i==j)
         {
            return vec[i];
         }
         if(j-i==1)
         {
            return max(vec[i],vec[j]);
         }

 

       int &ans=memo[i][j];

       if(ans!=-1)return ans;



       ans=vec[i]+min(dp(i+1,j-1),dp(i+2,j));
        ans=max(ans,vec[j]+min(dp(i+1,j-1),dp(i,j-2)));


       return ans;



  }
  
  int32_t main()
  {
  #ifndef ONLINE_JUDGE
      freopen("input.txt","r",stdin);
      freopen("output.txt","w",stdout);
  #endif
  
 
   cin>>n;
   memset(memo,-1,sizeof(memo));
   for(int i=0;i<n;i++)
   {
       int x;
       cin>>x;
       vec.push_back(x);
   }




    cout<<dp(0,n-1)<<endl;





 
      return 0;
  }
