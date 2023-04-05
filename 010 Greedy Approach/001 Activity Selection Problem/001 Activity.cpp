#include <bits/stdc++.h>
using namespace std;

struct Activity {
    int start;
    int finish;
};

bool cmp(Activity a, Activity b){  //sorting activity by finish time
    return a.finish < b.finish;
}

int activitySelection(Activity arr[], int n) { //activity array , n= number of aCTIVY
    sort(arr, arr + n, cmp);
    int count = 1;
    int prev_finish = arr[0].finish;

    for (int i = 1; i < n; i++) {
        if (arr[i].start >= prev_finish) {
            count++;
            prev_finish = arr[i].finish;
        }
    }

    return count;
}

int main() {
    Activity arr[] = {{1, 2}, {3, 4}, {0, 6}, {5, 7}, {8, 9}, {5, 9}};
    int n = sizeof(arr) / sizeof(Activity);

    int ans = activitySelection(arr, n);

    cout << "The maximum number of non-overlapping activities that can be performed is " << ans << endl;

    return 0;
}

