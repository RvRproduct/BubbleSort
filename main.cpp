#include <iostream>
#include <vector>

using namespace std;

void bubbleSort(vector<int> vec);

void bubbleSort(vector<int> vec) {
    const int length = vec.size();
    
    for (int i = 0; i < length; i++) {
        for (int j = 0; j < length; j++) {
            if (vec[j] > vec[j+1]) {
                // Swap numbers
                int temp = vec[j];
                vec[j] = vec[j+1];
                vec[j+1] = temp;
            }
        }
    }
    
    for (int item: vec)
        cout << item << " ";
}

int main(){
    const vector<int> numbers = {99, 44, 6, 2, 1, 5, 63, 87, 283, 4, 0};
    bubbleSort(numbers);
    cout << endl;
    return 0;
}