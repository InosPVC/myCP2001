// find if a element is in a set
int arr[] = { 14, 12, 15, 11, 10 };
set<int> s(arr, arr + 5);

// returns 0 or 1 
if (s.count(11)) // 1 
    if (s.count(18)) // 0 
