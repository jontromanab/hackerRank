#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int num;
    cin>>num;
    vector<string> words;
    for(int i=0;i<num;i++){
        string input;
        cin>>input;
        words.push_back(input);
      }
    
    for(int i=0;i<words.size();i++){
        //cout<<words[i]<<endl;
        string odd ;
        string even = "";
        for(int j=0;j<words[i].size();j++){
            if(j%2 ==0){
                //cout<<words[i][j]<<"->even"<<endl;
                even.push_back(words[i][j]);
            }
            else{
                //cout<<words[i][j]<<"->odd"<<endl;
                odd.push_back(words[i][j]);
            }
        }
        cout<<even<<" "<<odd<<endl;
        
    }
    return 0;
}
