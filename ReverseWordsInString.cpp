// Online C++ compiler to run C++ program online
#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <bits/stdc++.h>

using namespace std;
int main() {
    // Write C++ code here
    // std::cout << "Hello world!";
    string str = " pritam ";
    stringstream ss(str);
    string word;
    vector<string> vec; 
    while(ss>>word){
        vec.push_back(word);
    }
    reverse(vec.begin(),vec.end());
    // for(auto i:vec){
    //     cout<<i<<endl;
    // }
    stringstream ss2;
    for(auto ins = vec.begin(); ins!=vec.end(); ins++){
        if(ins!=vec.begin()){
            ss2<<" ";
        }
        ss2<<*ins;
    }
    cout<<ss2.str();
    return 0;
}
