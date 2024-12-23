#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

vector<int> removeDups(const vector<int>& arr) {
    unordered_set<int> dup;
    vector<int> result;
    
    int i = 0;
    while (i < arr.size()) {
        int n = arr[i];
        if (dup.find(n) == dup.end()) {
            dup.insert(n);
            result.push_back(n);
        }
    i++;
    }
    return result;
}
int main() {
    cout << "Enter the number of elements: ";
    int n;
    cin >> n;

    vector<int> arr(n);
    cout << "Enter the elements: ";
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    vector<int> result = removeDups(arr);
    cout << "Array after removing duplicates: ";
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
