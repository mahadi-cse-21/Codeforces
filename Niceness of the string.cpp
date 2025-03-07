#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    getchar();
    while (t--) {
        string s;
        getline(cin, s);

        vector<string> v;
        map<string,int>mp;
        string current_word;
        for (char c : s) {
            if (c != ' ') {
                current_word.push_back(c);
            } else {
                if (!current_word.empty()) {
                    v.push_back(current_word);
                    current_word.clear();
                }
            }
        }
        if (!current_word.empty()) {
            v.push_back(current_word);
        }


        for (auto word : v) {
                //cout<<word<<endl;
           mp[word]++;
        }
        cout<<mp.size()<<endl;
    }
    return 0;
}
