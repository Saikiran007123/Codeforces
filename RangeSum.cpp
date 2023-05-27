#include <iostream>
using namespace std;

void solve(){
   int n; cin>>n;
   int a[n];
   for(int i=0;i<n;i++){
      cin>>a[i];
   }
   int pre[n];
   pre[0]=a[0];
   for(int i=1;i<n;i++){
      pre[i]=pre[i-1]+a[i];
   }

   for(int i=0;i<n;i++){
      cout<<pre[i]<<" ";
   }
 int l,r; cin>>l>>r;
 cout<<endl;
 cout<<pre[-1]<<endl;
 cout<<ans<<endl;
   //cout<<pre[0]<<endl;
}
int main() {
	// your code goes here
	//int t; cin>>t;
	//while(t>0){
	   solve();
	   //t--;
	//}
	
}

