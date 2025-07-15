//stl = standard template library 

// #include<iostream>
// #include<array>

// using namespace std;
// int main(){
//     int basic[3] = {1,2,3};
//     array<int, 4> a = {1,2,3,4};//yeh static hoti

//     int size = a.size();

//     for(int i=0;i<size;i++){
//         cout << a[i] << endl;
//     }
//     cout << "Elemenet at 2nd index " <<a.at(2)<<endl;
//     cout <<"Empty ot not->"<<a.empty()<<endl; 

//     return 0;
// }

//vector need due to dynamic memory allocation
// list

// syntax 
// list<int> l = {1,2,3};

// #include<iostream>
// #include<list>
// #include<vector>
// using namespace std;

// int main(){
//     list<int> l={1, 2, 3};
//     // l.push_back(7);
//     // l.push_front(2);
//     // l.push_front(1);
//     // l.push_back(4);
//     // l.push_back(5);
//     // for(int i: l){
//     //     cout << i << " ";
//     // }
    
//     // cout << endl;

//     // l.pop_back();
//     // l.pop_back();
//     // for(int i: l){
//     //     cout << i << " ";
//     // }
//     // cout << endl;
//     // l.pop_front();
//     // for(int i: l){
//     //     cout << i << " ";
//     // }
//     return 0;
// }

//deque 
// #include<iostream>
// #include<deque>
// using namespace std;

// int main(){
//     deque<int> d = {1,2,3,4,5};

//     for(int i:d){
//         cout << i << " ";
//     }
//     cout << endl;
//     cout << d[2]<<endl;
// }

//pair
// kini do value ka group bnake ek saath rakhna chahe
//pair mein zruri nhi ha same value ka ho alag alag v ho sakde

// #include<iostream>
// #include<vector>
// #include<list>
// #include<deque>
// using namespace std;

// int main(){
//     pair<string, int> p = {"shradha", 5};

//     cout << p.first << endl;
//     cout << p.second << endl;
//     return 0;
// }

// stack ek k upar ek iss mein element add sirf top se ho skte remove bhi top se hi kr sakte
//jo last mein hota voh first bahr hota
/*
Functions of stack are
push() : Adds an element to the top of the stack., emplace
top() : to check whcih element at top;
pop() : Removes the top element from the stack.
size() :
empty() :
swap() :
*/
// #include<iostream>
// #include<stack>

// using namespace std;

// int main(){
//     stack<int> s;

//     s.push(50);
//     s.push(54);
//     s.push(47);
//     stack<int> s2;
//     s2.push(4);
//     s2.push(7);
//     s2.swap(s);
//     // while(!s.empty()){
//     //     cout << s.top() << " ";
//     //     s.pop();
//     // }
//     cout << endl;
//     cout << "s size " << s.size() << endl;
//     cout << "s2 size " << s2.size() << endl;
// }

//Queue
//syntax
//queue<int> q;

// same as stack
// #include<iostream>
// #include<queue>

// using namespace std;

// int main(){
//     queue<int> q;

//     q.push(50);
//     q.push(54);
//     q.push(47);
//     queue<int> q2;
//     q2.push(4);
//     q2.push(7);
//     // q2.swap(s);
//     while(!q.empty()){
//         cout << q.front() << " ";
//         q.pop();
//     }
//     cout << endl;
//     cout << "q size " << q.size() << endl;
//     cout << "q2 size " << q2.size() << endl;
// }


// map => by default sort krta data ko inc 
 
// #include<iostream>
// #include<map>
// using namespace std;

// int main(){
//     map <string, int> m;
//     m["tv"] = 100;
//     m["laptop"] = 100;
//     m["headphone"] = 50;
//     m["tablet"] = 120;
//     m["watch"] = 50;
    
//     m.emplace("Camera", 25);
//     for(auto p: m) {
//         cout << p.first << " " <<p.second << endl;
//     }

//     cout << "count = " << m.count("laptop") << endl;    //m.count tells kinti laptop k keys ha 
//     cout << "count = " << m["laptop"] << endl;         //m[] btaega voh kitni ha
//     m.erase("tv");
//     for(auto p:m){
//         cout << p.first <<"=" << p.second << endl;
//     }
//     return 0;
// }



// priority
// #include<iostream>
// #include<queue>
// using namespace std;

// int main(){
//     priority_queue<int> maxi;
//     maxi.push(12);
//     maxi.push(2);
//     maxi.push(31);
//     maxi.push(69);
//     maxi.push(961);
//     int n = maxi.size();
//     cout << "Max"<< endl;
//     for(int i=0;i<n;i++){
//         cout << maxi.top()<<" ";
//         maxi.pop();
//     }
//     cout << endl<<endl;
    
//     priority_queue<int, vector<int>,greater<int>> mini;
//     mini.push(12);
//     mini.push(2);
//     mini.push(31);
//     mini.push(69);
//     mini.push(961);
//     int m = mini.size();
//     cout << "Min" << endl;
//     for(int i=0;i<m;i++){
//         cout << mini.top() << " ";
//         mini.pop();
//     }
//     cout << endl<< endl;

// }

// set
#include<iostream>
#include<set>

using namespace std;

int main(){
    set<int> s;
    s.insert(4);
    s.insert(4);
    s.insert(4);
    s.insert(4);
    s.insert(1);
    s.insert(1);
    s.insert(1);
    s.insert(6);
    s.insert(6);
    s.insert(6);
    s.insert(6);
    s.insert(6);
    s.insert(6);
    s.insert(6);
    s.insert(6);
    s.insert(6);
    s.insert(3);
    s.insert(3);
    s.insert(3);
    s.insert(3);

    for(auto i : s) {
        cout << i << endl;
    }
    cout << endl<<endl;
    // s.erase(s.begin()+2);
    
    set<int>::iterator it = s.begin();
    it++;
    it++;
    s.erase(it);
    for(auto i: s) {
        cout << i << endl;
    }

    // for(auto i : s) {
    //     cout << i << endl;
    // }

}