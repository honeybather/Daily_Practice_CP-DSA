#include <bits/stdc++.h>
using namespace std;

#define deb(x) cout<<#x<<" "<<x<<endl;
#define fo(i,n) for(int i=0;i<n;i++)
#define Fo(i,k,n) for(int i=k;i<n;i++)
#define N 101
#define ll long long
#define endl "\n"
#define mod 1000000007
#define pb push_back
#define F first
#define S second
#define mp make_pair
#define lb lower_bound
#define ub upper_bound
#define all(x) x.begin(), x.end()
typedef vector<int> vi;

int main() {
    int T,n,k,loss(0),p;
    cin>>T;
    while(T--) {
        cin>>n>>k;
        for(int i=0;i<n;i++) {
            cin>>p;
            if(p>k) {
                loss+=(p-k);
            }
        }
        cout<<loss<<endl;
        loss=0; 
    }

    return 0;
}