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
    int T;
    cin>>T;
    while(T--) {
        string s;
        string p;
        cin>>s; // main string
        cin>>p; // sub string
        vector<int> hash_map(26,0);
        for(int i=0;s[i];i++) {
            hash_map[s[i]-'a']++;
        }

        for(int i=0;p[i];i++) {
            hash_map[p[i]-'a']--;
        }

        char p_diff=p[0];
        for(int i=1;i<p.size();i++) {
            if(p_diff!=p[i]) {
                p_diff=p[i];
                break;
            }
        }
        
        string res="";
        int i;
        for(i=0;i<26 && i+'a'<p[0];i++) {
            while(hash_map[i]>0) {
                res=res+(char)(i+(int)'a');
                hash_map[i]--;
            }
        }

        if(p_diff>=p[0]) {
            while(hash_map[i]>0) {
                res=res+(char)(i+(int)'a');
                hash_map[i]--;
            }
        }
        
        res+=p;

        for(int i=0;i<26;i++) {
            while(hash_map[i]>0){
                res=res+(char)(i+(int)'a');
                hash_map[i]--;
            }
        }
        cout<<res<<endl;
    }

    return 0;
}