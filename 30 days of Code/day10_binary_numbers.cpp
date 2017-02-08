#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;

void DecimalToBinary(int& n, vector<int>& vec){
    while(n>0){
        int rem = n%2;
        vec.insert(vec.begin(),rem);
        n /=2;
    }
}

int maxOnes(vector<int> vec){
    int count = 0;
    vector<int> counting;
    for(int i=0;i<vec.size();i++){
        if(vec[i] == 1){
            count++;
        }
        else{count = 0;}
        counting.push_back(count);
    }
    return *max_element(counting.begin(), counting.end());
}

int main(){
    int n;
    cin >> n;
    vector<int> vec;
    DecimalToBinary(n, vec);
    cout<<maxOnes(vec)<<endl;
    return 0;
}

