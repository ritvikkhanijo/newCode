// 1) Find the middle index, say ‘mid’.
// 2) If ‘mid’ is even, then compare arr[mid] and arr[mid + 1]. If both are the same, then 
// the required element after ‘mid’ and else before mid.
// 3) If ‘mid’ is odd, then compare arr[mid] and arr[mid – 1]. If both are the same, then 
// the required element after ‘mid’ and else before mid.

void search(int arr[], int low, int high)
{
 
    // Base cases
    if (low > high)
        return;
 
    if (low == high) {
        cout << "The required element is " << arr[low];
        return;
    }
 
    // Find the middle point
    int mid = (low + high) / 2;
 
    // If mid is even and element next to mid is
    // same as mid, then output element lies on
    // right side, else on left side
    if (mid % 2 == 0) {
        if (arr[mid] == arr[mid + 1])
            search(arr, mid + 2, high);
        else
            search(arr, low, mid);
    }
 
    // If mid is odd
    else {
        if (arr[mid] == arr[mid - 1])
            search(arr, mid + 1, high);
        else
            search(arr, low, mid - 1);
    }
}