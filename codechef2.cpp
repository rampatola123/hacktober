#include <iostream>
using namespace std;

//Compiler version g++ 6.3.0

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
      int x,y;
      cin>>x>>y;
      if(x>y){
        int ans=(x-y)%2==0?1:2;
        cout<<ans;
      }
      else if(x<y){
        int ans=(y-x)%2==0?2:1;
        cout<<ans;
      }
      else
       cout<<0;
       cout<<endl;
    }
    return 0;
}