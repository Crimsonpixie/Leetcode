#include<bits/stdc++.h>
using namespace std;
bool helper(vector<int>& A,int n,int m,int minDist){
  int lastPos=A[0];
  int count=1;  
  for(int i=1;i<n;i++){
    if(A[i]-lastPos>=minDist){
      count++;
      lastPos=A[i];
      if(count==m){
        return true;  
      }  
    }  
  }
 return false;   
}
int maxDistance(vector<int>& A, int m) {
  int n=A.size();  
  sort(A.begin(),A.end());
  int start=0,end=A[n-1]-A[0];
  int minPos=-1;
  while(start<=end){
   int mid=(start+end)/2;
   bool magnetsRakhPaye=helper(A,n,m,mid);
   if(magnetsRakhPaye){
     start=mid+1;
     minPos=mid;  
   }   
   else{
     end=mid-1;  
   }   
  }  
 return minPos;
}
int main(){
 #ifndef ONLINE_JUDGE
     freopen("input.txt","r",stdin);
     freopen("output.txt","w",stdout);  
 #endif
 ios_base::sync_with_stdio(false);
 vector<int> A{1,2,3,4,7};
 int dist=maxDistance(A,3);
 cout<<dist;
 return 0; 
}