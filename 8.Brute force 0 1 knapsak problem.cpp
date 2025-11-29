#include <bits/stdc++.h>
using namespace std;
struct Item
{
    int itemNo;
    int weight;
    int profit;
};

int knapSack(int capacity, Item items[], int n)
{
    if (n == 0 || capacity == 0)
        return 0;

    if (items[n - 1].weight> capacity)
        return knapSack(capacity, items, n - 1);

    else
    {
        int include = items[n - 1].profit + knapSack(capacity - items[n - 1].weight, items, n - 1);
        int exclude = knapSack(capacity, items, n - 1);
        return max(include, exclude);
    }
}
int main()
{
    cout << "Enter number of items: ";
    int n;
    cin >> n;
    Item items[n];

    cout << "Enter Items (Item No, weight, Profit):\n";
    for (int i = 0; i < n; i++)
    {
        cin >> items[i].itemNo >> items[i].weight >> items[i].profit;
    }
    cout << "Enter capacity: ";
    int capacity;
    cin >> capacity;

    int maxProfit = knapSack(capacity, items, n);

    cout << "\nMaximum profit within capacity " << capacity << " is: " << maxProfit << "\n";
    return 0;
}

