#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<int> arr(n);
        int array_sum = 0;
        int odd_count = 0;

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            array_sum += arr[i];

            if (arr[i] % 2 == 1)
            {
                odd_count++;
            }
        }

        string result = (array_sum % 2 == 1 || (odd_count > 0 && odd_count < n)) ? "YES" : "NO";

        cout << result << endl;
    }

    return 0;
}
