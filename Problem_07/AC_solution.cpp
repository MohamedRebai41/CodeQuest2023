#include <bits/stdc++.h>


using namespace std;


void solve(){
  int n;cin>>n;
  vector<long long> a(n),b(n+1);
  b[0]=0;
  long long sum = 0;
   for (int i=0;i<n;i++){
    cin>>a[i];
    sum+=a[i];
    b[i+1] = sum;
  }
  if (sum % 2){
    cout<<"0"<<endl;
    return ;
  }
  long long dis = sum /2;
  long long ans = 0;
  int i=0,j=1;
  while(i<n-1 && j<n){
    if (b[j]-b[i] == dis){
      ans+=n-2;
      i++;
      j++;
    }else if (b[j]-b[i] < dis){
      j++;
    }else{
      i++;
    }
  }
  cout<<ans<<endl;
}
int main(){
  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
  solve();
  return 0;
}