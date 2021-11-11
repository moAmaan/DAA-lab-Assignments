#include <bits/stdc++.h>
using namespace std;
int find_maximum_jobs(
    int N,
    vector<pair<int, int> > ranges)
{
    // Min Heap
    priority_queue<int, vector<int>,
                   greater<int> >
        queue;
    sort(ranges.begin(), ranges.end());
    int min_day = ranges[0].first;
    int max_day = 0;
 
    for (int i = 0; i < N; i++)
        max_day
            = max(max_day,
                  ranges[i].second);
 
    int index = 0, count_jobs = 0;
    for (int i = min_day; i <= max_day; i++) {
        while (index < ranges.size()
               && ranges[index].first <= i) {
 
            queue.push(ranges[index].second);
            index++;
        }
        while (!queue.empty()
               && queue.top() < i)
            queue.pop();
        if (queue.empty())
            continue;
        count_jobs++;
        queue.pop();
    }
    return count_jobs;
}
int main()
{
 
    int N;
    cin>>N;
    vector<pair<int, int> > ranges;
    int arr1[N], arr2[N];
    for(int i=0;i<N;i++)
        cin>>arr1[i];
    for(int i=0;i<N;i++)
        cin>>arr2[i];
    for(int i=0;i<N;i++){
        ranges.push_back(make_pair(arr1[i], arr2[i]));
    }
    cout << find_maximum_jobs(N, ranges);
}