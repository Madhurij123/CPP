#include <iostream>
#include <vector>
using namespace std;

class SubsetGenerator {
private:
    vector<vector<int>> result;

    void generate(vector<int>& arr, vector<int>& current, int index) {
        // Base case: all elements considered
        if (index == arr.size()) {
            result.push_back(current);
            return;
        }

        // Include current element
        current.push_back(arr[index]);
        generate(arr, current, index + 1);

        // Backtrack (remove element)
        current.pop_back();

        // Exclude current element
        generate(arr, current, index + 1);
    }

public:
    vector<vector<int>> getSubsets(vector<int>& arr) {
        vector<int> current;
        generate(arr, current, 0);
        return result;
    }

    void printSubsets(const vector<vector<int>>& subsets) {
        cout << "All possible subsets:\n";

        for (const auto& subset : subsets) {
            cout << "[";
            for (int i = 0; i < subset.size(); i++) {
                cout << subset[i];
                if (i != subset.size() - 1)
                    cout << ", ";
            }
            cout << "]\n";
        }
    }
};

int main() {
    vector<int> arr = {1, 2, 3};

    SubsetGenerator obj;
    vector<vector<int>> subsets = obj.getSubsets(arr);

    obj.printSubsets(subsets);

    return 0;
}

