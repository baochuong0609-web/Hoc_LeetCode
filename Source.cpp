#include <iostream>
#include <vector>

using namespace std;

vector<int> CreateArray(int n) {
    
    vector<int> arr(n);

    
    for (int i = 0; i <= n; i++) {  //error 1
        arr[i] = i + 1;
    }
    return arr;
}

int CalculateSum(vector<int> numbers) {
    int sum = 0;

   
    for (size_t i = 0; i < numbers.size(); i++) {  //error 2
      
       sum += i;
    }
    return sum;
}

int main() {
    vector<int> myArray = CreateArray(10);
    int sum = CalculateSum(myArray);

    cout << "Tong tu 1 den 10 la: " << sum << endl; // Kết quả mong đợi là 55

    return 0;
}