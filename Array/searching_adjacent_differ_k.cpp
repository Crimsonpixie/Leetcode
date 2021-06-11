#include<bits/stdc++.h>
using namespace std;
int findIndex(int *A,int n,int k,int x){ 
  int i=0;
  while(i<n){
  	if(A[i]==x){
      return i;		
  	}
  	i=i+max(1,(abs(A[i]-x))/k);
  }
  return -1;
}
int main(){
 #ifndef ONLINE_JUDGE
     freopen("input.txt","r",stdin);
     freopen("output.txt","w",stdout);  
 #endif
 ios_base::sync_with_stdio(false);
 int n,k,x;
 cin>>n>>k>>x;
 int *A=new int[n];
 for(int i=0;i<n;i++){
   cin>>A[i];
 }
 int index=findIndex(A,n,k,x);
 cout<<index;
 return 0;
}