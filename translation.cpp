#include <iostream>
#include <algorithm>

using namespace std;

int main(){

    string t, s;

    getline(cin,t);
    getline(cin,s);

    reverse(t.begin(),t.end());

    if(t == s){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }

    return 0;
    
 }
