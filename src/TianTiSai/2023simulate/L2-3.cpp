#include<bits/stdc++.h>
// #include<exception>
using namespace std;
map<string,vector<string>> all;
int res;
void count(string s){
    try{
    	if(all[s].size()==0)return;
        stoi(all[s][0]);
        res+=all[s].size();
        // for(int i=0;i<all[s].size();i++){
 	       // count(all[s][i]);
    	    // cout<<all[s][i]<<' ';
        // }
    }catch(exception &e){
        for(int i=0;i<all[s].size();i++){
            // if(all[s][i]!="0") 
            	count(all[s][i]);
            	// cout<<all[s][i]<<' ';
        }
    }
}
void have_del(string node,string s){
    try{
        stoi(all[node][0]);
        for(string child:all[node]){
            if(s==child){
                remove(all[s].begin(),all[s].end(),s);
                all[s].shrink_to_fit();
            }
        }
    }catch(exception &e){
        for(string child:all[node]){
            count(child);
        }
    }
}


int main() {
    // 3 / 0;return 0;
    // try {
        // stoi("L");
        // 3 / 0;
    // }
    // catch (exception &e) {
    // catch (const char* e) {
        // cerr<<e<<endl;
        // cerr<<e.what()<<endl;
    // }
    // return 0;
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int n,m;
    cin>>n>>m;
    while(m--){
        string a,b;
        cin>>a>>b;
        all[b].push_back(a);
        // if(b=="ZJ") cout<<a<<' ';
    }
    // cout<<'\n';
    string ins, s;
    // cout << "CNTR:";for (auto i : all["CNTR"]) cout << i << ' ';cout<<'\n';
    // cout << "JN:";for (auto i : all["JN"]) cout << i << ' ';cout<<'\n';
    // return 0;
    while (cin >> ins && ins != "E") {
        if (ins == "T") {
            string a,b;
            cin>>a>>b;
            have_del("CNTR",s);
            all[b].push_back(a);
        }else if(ins=="Q"){
            cin>>s;
            res=0;
            count(s);
            cout<<res<<'\n';
        }
    }
    return 0;
}
