#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main(){
    int num;
    vector<int> nums = {};
    while (cin >> num){
        nums.push_back(num);
    }
    for(int j = 1; j <= nums.size(); j++){
        sort(nums.begin(), nums.begin() + j);
        if(j == 1){cout << nums[j-1] <<endl;} // beginning
        else if((j%2)==0){
            int n1 = nums[(j/2)];
            int n2 = nums[((j/2))-1];
            cout << ((n1+n2)/2) << endl;
        }
        else{
            cout << nums[(j/2)] << endl; 
        }
    }

}