#include<iostream>
#include<map>

using namespace std;

int main(){
    map<int, string> m;
    m[1]="love";
    m[1111]="babbar";
    m[234]="kumar";
    m[3]="teacher";
    m.insert( {69, "jai ho"});
    for(auto i:m){
        cout << i.first <<" "<< i.second<<  endl;
    }
    cout <<"Finding 69 in map: "<< m.count(69)<<endl;

    cout << endl;
    cout << endl;
    m.erase(69);
    for(auto i: m){
        cout << i.first << " " << i.second << endl;
    }
    cout << endl<< endl;
    

    auto it = m.find(1);
    for(auto i=it; i!=m.end(); i++){
        cout << (*i).first << endl;
    }
    
}