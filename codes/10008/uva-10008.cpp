#include <iostream>
#include <cstring>

using namespace std;

int main(){
    int n, temp;
    string text, add;
    char alp[28] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    int freq[28] = {0};
    cin >> n;
    while(n>=0)
    { 
        getline(cin, add);  // if not use getline then it would consider the the empty space as the terminator
        text += add;
        n--;

    }
    for(int i = 0; i < text.length(); i++){ 
        text[i] = toupper(text[i]);
        if(isalpha(text[i])){
            freq[(text[i])-'A'] += 1;
        }
        else{continue;}
    }
    for(int i = 0; i < 26; i++){     // bubble sort for both the alphabet and the dict.
        for(int j = 0; j < 26; j++){
            if(freq[j] < freq[j+1]){
                temp = freq[j];
                freq[j] = freq[j+1];
                freq[j+1] = temp;

                temp = alp[j];
                alp[j] = alp[j+1];
                alp[j+1] = temp;
            }
        }
    }
    for(int i = 0; i < 26; i++){
        if(freq[i])
            cout << alp[i] << " " << freq[i] << endl;
    }
}