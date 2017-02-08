#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    map<string, int> m;
    int num;
    cin>>num;
    for(int i=0;i<num;i++){
        string name;
        int ph;
        cin>>name>>ph;
        m.insert(pair<string, int>(name, ph));
    }
    string q;
    while(cin>>q){
        map<string, int>::iterator it;
        it = m.find(q);
        if(it != m.end()){
            cout<<it->first<<"="<<it->second<<endl;
        }
        else{
            cout<<"Not found"<<endl;
        }
    }
    return 0;
}
