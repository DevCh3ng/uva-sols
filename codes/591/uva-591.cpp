#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int t, n= 0, stacks[51]={0};
    int cs = 0; 
    while(cin >> t && t > 0){
        cs++;
        int num =0 ;
        for (int j = 0; j < t; j++){
            cin >> n;
            stacks[j] = n;
            num += n;
        }
        int final = 0; 
        int avg = num / t;
        for(int x = 0; x < t; x++){
            if(stacks[x] > avg){
                final += stacks[x] - avg;
            }
        }
        cout << "Set #" << cs << endl;
        cout << "The minimum number of moves is "<< final << "."<< endl;
        cout << endl;

    }
}