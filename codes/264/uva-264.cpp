#include <iostream>
using namespace std;


void right(int r, int c, int n);
void down(int r, int c, int n);
void left_down(int r, int c, int n);
void right_up(int r, int c, int n);

void right(int r, int c, int n){
    c+=1;
    n--;
    if((r+1)!=0 && (c-1)!=0 && n!=0){ // left down
        left_down(r,c,n);
    }
    else if ((r-1)!=0 && (c+1)!= 0 && n!=0) { // right up
        right_up(r,c,n);
    }
    if (n==0) cout << r <<"/" << c << endl;
    return;
}
void down(int r, int c, int n){
    r+=1;
    n--;
    if((r-1)!=0 && (c+1)!= 0 && n!=0){
        right_up(r,c,n);
    }
    else if((r+1)!=0 && (c-1)!=0 && n!=0){
        left_down(r,c,n);
    }
    if (n==0) cout << r <<"/" << c << endl;
}
void left_down(int r, int c, int n){
    r+=1;
    c-=1;
    n--;
    if ((r+1)!=0 && (c-1)!=0 && n!=0){ // go left down again
        left_down(r,c,n);
    }
    else if((r+1)!=0 && n!=0){
        down(r,c,n);
    }
    else if ((c+1)!=0 && n!=0){
        right(r,c,n);
    }
    if (n==0) cout << r <<"/" << c << endl;
    return;
}
void right_up(int r, int c, int n){
    r-=1;
    c+=1;
    n--;
        if ((r-1)!=0 && (c+1)!=0 && n!=0){ // go right up again
        right_up(r,c,n);
    }
    else if((c+1)!=0 && n!=0){
        right(r,c,n);
    }
    else if ((r+1)!=0 && n!=0){
        down(r,c,n);
    }
    if (n==0) cout << r <<"/" << c << endl;
    return;
}

int main(){
    int n = 0;
    int r = 1, c = 1;
    while(cin >> n)
        if (n > 1){
            cout << "TERM " << n << " IS ";
            n--;
            right(r,c,n);
        }
        else{
            cout << "TERM 1 IS 1/1" << endl;
        }
}