#include <iostream>
#include <vector>
using namespace std;

int searchRotated(vector<int>& nums, int target) 
{
    int low = 0, high = nums.size() - 1;

    while (low <= high)
	 {
        int mid = (low + high) / 2;

        if (nums[mid] == target)
            return mid;

        if (nums[low] <= nums[mid]) 
		{
            if (target >= nums[low] && target < nums[mid])
                high = mid - 1;
            else
                low = mid + 1;
        }
        else {
            if (target > nums[mid] && target <= nums[high])
                low = mid + 1;
            else
                high = mid - 1;
        }
    }
    return -1;
}

int main() {
    int n, target;
    vector<int> nums;

    cout << "Enter size of array: ";
    cin >> n;

    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++) 
	{
        int x;
        cin >> x;
        nums.push_back(x);
    }

    cout << "Enter target element: ";
    cin >> target;

    int result = searchRotated(nums, target);

    if (result == -1)
        cout << "Element not found";
    else
        cout << "Element found at index " << result;

    return 0;
}
	
