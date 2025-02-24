#include <iostream>
#include <cstring>
using namespace std;
int main(){
    string text;
    int ar[50001] = {0};
    int t=0, cnt =0, n;
    cin >> t;
    cin.ignore();
    while(t){
        for(int i = 0; i < 3; i++){
            cin >> n;
            if(ar[n] == 0){
                ar[n] = 1;
                cout << "no" << endl;
            }
            else if(ar[n] == 1){
                cnt++;
                cout << "yes " << n << endl;
            }
        }
        t--;
    }
    cout << cnt; 
}