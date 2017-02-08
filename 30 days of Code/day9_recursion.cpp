#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int factorial(int n){
    if(n<1){
        return 1;
    }
    else{
        return n*factorial(n-1);
    }
    
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int num;
    cin>>num;
    int fact = factorial(num);
    cout<<fact<<endl;
    return 0;
}

