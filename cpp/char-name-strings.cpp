// #include<iostream>
// #include<cstring>
// using namespace std;

// int main(){
//     char name[20];
//     cin >> name;
//     // name[2] = '\0';
//     // cout<<name;
//     //find length of string

//     // int count = 0;
//     // for(int i=0;name[i]!='\0';i++){
//     //     count++;
//     // } 
//     // cout<<count;

//     //reverse a string
//     // int s = 0;
//     // int e = strlen(name)-1;
//     // while (s<e)
//     // {
//     //     swap(name[s++], name[e--]);
//     // }
//     // cout<<name;
// }

// #include<iostream>
// #include<cstring>
// using namespace std;

// bool check( char a[], int n ){
//     for(int i=0;i<n-1;i++){
//         if(a[i] != a[n-i-1]){
//             return false;
//         }
//     }
//     return true;
// }

// int main(){
//     char a[200];
//     cin >> a;
//     int n = strlen(a);
//     if(check(a, n)){
//         cout << "It is palindrome";
//     }else{
//         cout <<"Not";
//     }
// }

//count max occurence elemnet in string only charac abcd wagera

// #include<iostream>
// #include<cctype>
// #include<string>
// using namespace std;

// char get(string s){
//     int arr[26] = {0};
//     for(int i=0;i<s.length();i++){
//         char ch = tolower(s[i]);
//         if(ch >='a' && ch <='z'){
//             int index = ch - 'a';
//             arr[index]++;
//         }
//     }
//     int maxi = -1, ansindex = 0;
//     for(int i=0;i<26;i++){
//         if(arr[i] > maxi){
//             maxi = arr[i];
//             ansindex=i;
//         }
//     }
//     return 'a'+ansindex;
// }

// int main(){
//     string s;
//     //cin >> s;// this input only till space for complete line use getline
//     getline(cin,s);
//     cout <<"The max occurence element is "<< get(s)<<endl;

// }

// to find length in string strlen(name);
// compare compare(s1, s2)
// to copy string strcpy(s1, s2)

//replace space and add @40
// #include<iostream>
// #include<string>
// #include<cctype>
// using namespace std;

// string rep(string &s){
//     string temp = "";
//     for(int i=0;i<s.length();i++) {
//         if(s[i] == ' '){
//             temp.push_back('@');
//             temp.push_back('4');
//             temp.push_back('0');
//         }
//         else{
//             temp.push_back(s[i]);
//         }
//     }
//     return temp;
// }

// int main(){
//     string s;
//     getline(cin,s);
//     cout<< rep(s)<<endl;
// }

// remove all occurence of a substring
// #include<iostream>
// #include<string>
// #include<cctype>
// using namespace std;

// string rem(string s, string sub){
//     while(s.length() != 0 && s.find(sub) < s.lenght()){
//         s.erase(s.find(sub), sub.length());
//     }
//     return s;
// }

// int main(){
//     string s;
//     getline(cin , s);
//     string sub;
//     getline(cin , sub);
//     cout<<rem(s, sub);
// }

//permutation in string 
// jaise ek s2 = cdbakcmcm s1 = ab toh ab kisi bhi treek mein agr s2 mein h toh true ab ya ba same

