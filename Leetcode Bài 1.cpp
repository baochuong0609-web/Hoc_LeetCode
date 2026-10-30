//STATUS: AC

#include <iostream>
#include <vector>
using namespace std;

int searchInsert(vector<int>& nums, int target) {
    
    int left = 0;
    int right = nums.size() - 1;


    while (left < right) {
        int mid = left + (right - left) / 2;

        if (nums[mid] == target) {
            return mid ;
        }
        else if(nums[mid] < target){
            left = mid + 1;
        }
        else {
            right = mid - 1;
        }
    }
    if(target > nums[left]) return left+1;
    return left;
}

int main() {
    int n;
    cin >> n;
    vector <int> a(n);
    for (int i = 0;i < n;i++) {
        cin >> a[i];
    }
    int x;
    cin >> x;
    cout << searchInsert(a, x);
    return 0;
}

            
