#include <iostream>
#include <unordered_map>
using namespace std; 
int main(){
    int t, b, n;
    cin >> t; 
    cin >> b;
    int* arr1 = new int(t);
    int* arr2 = new int(b); // fu malloc && expense on memory
    for (int i = 0; i < t; i++){
        cin >> n;
        arr1[i] = n; 
    }
    n = 0;
    for(int j = 0; j < b; j++){
        cin >> n;
        arr2[j] = n;
    }
    unordered_map<int,int> freq; // fuck it 
    int sml = t <= b ? t : b; 
    int cook = 0, best = 0, val =0;
    for(int i = 0; i < sml; i++){
        for(int k = i; k < sml; k++){
            cook = arr2[k] - arr1[i];
            if(cook > 0){
                freq[cook]++;
                if(freq[cook] > val ||(freq[cook] == val && cook < best)){
                    val = freq[cook];
                    best = cook;
                }
            }
        }
    }
    cout << best;
    
}       

