#include <iostream>
#include <vector>
#include <map>        
#include <string>
#include <set>
#include <queue>
#include <algorithm> //using reverse   
#include <sstream>
using namespace std;
typedef vector<string> vs;

int main(){
    int N;
    cin>>N;
    map<string, set<string>> adj;
    string str;
    getline(cin, str);;
    for(int i=0; i<N; i++){

        getline(cin, str);
        stringstream s(str);
        string a ,b;
        s>>a;
        while(s >> b){
            adj[a].insert(b);
            adj[b].insert(a);
        }
    }
    string start, end;
    cin>>start >> end;
    map<string, string> prev;
    prev[start] = "None";
    queue<string> q;
    q.push(start);
    while(!q.empty()){
        string current = q.front();
        q.pop();

        for(auto next:adj[current]){
            if(prev.count(next) == 0){
                prev[next] = current;
                q.push(next);
            }
        }
    }

    if(prev.count(end) == 0){
        cout<<"no route found"<<endl;
        return 0;
    }

    vector<string> ans;
    string curr = end;
    while(curr != "None"){
        ans.push_back(curr);
        curr = prev[curr];
    }

    reverse(ans.begin(), ans.end());
    for(auto i: ans)
        cout<<i<<" ";
    cout<<"\n";    
}