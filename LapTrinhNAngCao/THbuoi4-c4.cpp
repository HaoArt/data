#include <iostream>
#include <fstream>
#include <string>
#include <cstdio>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

int main() {
    string filename = "HANOI.txt";
    ifstream file("HANOI.txt");
    
    int line_count = 0;
    int word_count = 0;
    map<string, int> freq_map;
    vector<string> words_list;
    
    if(file.is_open()) {
        string line;
        while(getline(file, line)) {
            line_count++;
            int len = line.length();
            int pos = 0;
            string word;
            while(pos < len) {
                while(line[pos] == ' ' && pos < len) pos++;
                word = "";
                while(line[pos] != ' ' && pos < len) {
                    word += line[pos];
                    pos++;
                }
                if(word != "") {
                    word_count++;
                    words_list.push_back(word);
                    if(freq_map.find(word) == freq_map.end()) {
                        freq_map[word] = 0;
                    }
                    freq_map[word]++;
                }
            }
        }

        file.close();
        
        cout << "Number of lines: " << line_count << endl;
        cout << "Number of words: " << word_count << endl;
        
        cout << "Word frequency: " << endl;
        map<string, int>::iterator it;
        for(it = freq_map.begin(); it != freq_map.end(); it++) {
            cout << it->first << " : " << it->second << endl;
        }
        
        // Sort the word list and print it
        sort(words_list.begin(), words_list.end());
        cout << "Sorted words list: " << endl;
        vector<string>::iterator vit;
        for(vit = words_list.begin(); vit != words_list.end(); vit++) {
            cout << *vit << " ";
        }
        cout << endl;
    }
    else {
        cout << "Cannot open file " << filename << endl;
    }
    
    return 0;
}

