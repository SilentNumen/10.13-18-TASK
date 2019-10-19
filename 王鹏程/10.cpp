#include <bits/stdc++.h>
using namespace std;
int main()
{
    string words[105];
    int num = 0;
    while (cin >> words[num]){

        bool use = true;
        for (int i=0; i<num; i++){
            if (words[i].compare(words[num]) == 0){
                use = false;
                break;
            }
        }
        if (use) num++;
    }
    sort(words, words+num);
    for (int i=0; i<num; i++){
        cout << words[i] << endl;
    }
    return 0;
}/*1. compare is one by one compare,example :
string a="1234";string b="1234";
a.compare(b)返回值=0
string a="1234";string b="2345";
a.compare(b)返回值<0
string a="1234";string b="1234";
a.compare(b)返回值>0

 2. also can use '<,>,=,+'
example:    string str1="acd",str2="acd";

    printf("%d",str1==str2);


*/
