#include<bits/stdc++.h>
using namespace std;

int ladderLength(string beginWord, string endWord, vector<string>& wordList) {
    if(wordList.size() == 0 || beginWord == endWord || find(wordList.begin(),wordList.end(),endWord) == wordList.end())
        return 0;
    unordered_set<string> wordSet(wordList.begin(),wordList.end());
    queue<string> qu;
    
    qu.push(beginWord);
    int cnt = 1,p,i,len,l,alpha;
    string cur_word;
    char c;

    while(!qu.empty()){
        len = qu.size();
        for(p = 0;p < len;++p){
            string cur_word = qu.front();
            qu.pop();
            wordSet.erase(cur_word);
            l = cur_word.length();
            for(i = 0;i < l;++i){
                c = cur_word[i];
                for(alpha = 0;alpha < 26;++alpha){
                    cur_word[i] = alpha + 'a';
                    if(wordSet.find(cur_word) != wordSet.end()){
                        if(cur_word == endWord)
                            return cnt + 1;
                        qu.push(cur_word);
                        wordSet.erase(cur_word);
                    }
                }
                cur_word[i] = c;
            }
        }
        cnt++;
    }
    return 0;
}

int main(){
	int n;
	cin>>n;
	vector<string> wordList(n);
	for(int i = 0;i<n;i++)
		cin>>wordList[i];

	string beginWord, endWord;
	cin>>beginWord>>endWord;
	int res = ladderLength(beginWord,endWord,wordList);
	cout<<res;
}
