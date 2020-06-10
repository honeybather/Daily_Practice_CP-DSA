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
    int n,res(0);
    cin>>n;
    vi k(n);
    for(int i=0;i<n;i++) {
        cin>>k[i];
    }

    set<int> s;
    int start=0,end=0;
    for(end=0;end<n;end++) {
        if(s.count(k[end])) {
            res=max(res,end-start);
            while(k[start]!=k[end]) {
                s.erase(k[start++]);
            }
            start++;
        }
        else {
            s.insert(k[end]);
        }
    }
    res=max(res,end-start);
    cout<<res<<endl;
    return 0;
}