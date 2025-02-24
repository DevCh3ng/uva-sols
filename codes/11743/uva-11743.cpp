#include <cstring>
#include <iostream>
#include <cctype> 
using namespace std;

int mult_add(int n){
    int a[2] ={0}, i=0;
    while (n > 0){
        a[i] = (n%10);
        i++;
        n = n/10;
    }
    return (a[0] + a[1]);
}

bool count (const int* arr){
    int n1=0, n2=0, temp=0;
    for(int i = 0; i < 16; i++){ 
        if(i%2!=0){ // second half
            n2 += arr[i];
        }
        else {  // first half
            temp = (arr[i])*2;
            n1 += mult_add(temp); 
        }
    }
    return ((n1+n2)%10==0 ? 1 : 0);
}

int main(){
    int arr[16] = {0};
    int a, t;
    string number;
    cin >> t;
    cin.ignore();
    while (t){
        getline(cin, number);
        for(char ch : number){
            if(isdigit(ch) && a < 16){
                arr[a]= ch -'0';
                a++;
            }
        }
        if(count(&arr[0])){cout << "Valid"<<endl;}
        else{cout << "Invalid" << endl;}
        t--;
        memset(arr, 0, sizeof(arr));
        a=0;
    }
}