#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class Job {
public:
    int id, deadline, profit;
};
bool compare(Job a, Job b) {
    return a.profit > b.profit;
}
int main() {
    int n;
    cin >> n;
    vector<Job> jobs(n);

    for(int i = 0; i < n; i++) {
        cin >> jobs[i].id >> jobs[i].deadline >> jobs[i].profit;
    }
    sort(jobs.begin(), jobs.end(), compare);
    int maxD = 0;
    for(int i = 0; i < n; i++) {
        if(jobs[i].deadline > maxD) {
            maxD = jobs[i].deadline;
        }
    }
    vector<int> slot(maxD + 1, -1);
    int totalProfit = 0;
    vector<int> result;
    for(int i = 0; i < n; i++) {
        for(int d = jobs[i].deadline; d > 0; d--) {
            if(slot[d] == -1) {
                slot[d] = jobs[i].id;
                totalProfit += jobs[i].profit;
                result.push_back(jobs[i].id);
                break;
            }
        }
    }
    for(int x : result) {
        cout << x << " ";
    }
    cout << endl << totalProfit;
    return 0;
}
