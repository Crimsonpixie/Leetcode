#include<bits/stdc++.h>
using namespace std;
float solve(int n,int p){
 int start=0,end=n;
 float ans=-1;
 while(start<=end){
   int mid=(start+end)>>1;
   if(mid*mid==n){
   	return mid;
   }  
   else if(mid*mid<n){
     start=mid+1;
     ans=mid;
   }
   else{
     end=mid-1;	
   }
 }
 float inc=0.1;
 for(int i=0;i<p;i++){
   while(ans*ans<=n){
     ans+=inc;	
   }
   ans=ans-inc;
   inc=inc/10;	
 }
  return ans;
}
int main(){
 #ifndef ONLINE_JUDGE
     freopen("input.txt","r",stdin);
     freopen("output.txt","w",stdout);  
 #endif
 ios_base::sync_with_stdio(false); 
 int n,p;
 cin>>n>>p;
 float ans=solve(n,p);
 cout<<ans; 
 return 0;
}