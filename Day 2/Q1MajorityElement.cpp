#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

vector<int> majorityElement(vector<int> n){
    unordered_map<int, int> map;
    vector<int> res;
    for(int i=0; i<n.size(); i++){
        map[n[i]]++;
    }
    for(const pair<int, int>& i : map){
        if(i.second > n.size()/3){
            res.push_back(i.first);
        }
    }
    return res;
}

int main(){
    int size;
    cout << "Enter the number of elements: ";
    cin >> size;
    vector<int> n(size);
    cout << "Enter the elements: ";
    for(int i = 0; i < size; i++) {
        cin >> n[i];
    }
    vector<int> res = majorityElement(n);
    for(auto i: res){
        cout<<i<<" ";
    }
    return 0;
}

//given an integer array of numbers where numbers are sorted in ascending order,  convert it into a height balanced binary search tree