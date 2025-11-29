#include<bits/stdc++.h>
using namespace std;

struct Items
{
    int itemNo;
    float quantity,Profit, pwprofit;
};
bool compare(Item a, Item b)
{
    return a.pwprofit<b.pwprofit;
}
int main()
{
    cout<<"Enter Number of items: ";
    int n;
    cin>>n;
    Item items[n];
    cout<<"Enter Items(Item No, Quantity, Profit):\n";
    for(Int i=0; i<n;i++)
    {
        cin>>items[i].itemNo>>items[i].quantity>>items[i].profit;
        items[i],pwprofit=items[i].profit/items[i].quantity;
    }
    sort(items, items+n,compare);//shobar age dekhte hobe er moddhe ki ki value jabe array er moddhe
    cout<<"Enter capacity:";
    cin>>capacity;
    float profit=0; capacity left=capacity;
    float capacity;
    for(int i=0; i<n; i++)
    {
        if(capacity lest<=0)
        {
            break;
        }
        if(items[i].quantity<=capacity left)
        {
            profit+=items[i].profit;
            capacity left=items[i].quantity;
        }
        cout<<"Item No."<<items[i].itemNo<<"Quantity:"<<item;
        else
        {
            profit+=capacity left* items[i].pwprofit;
            cpacity_left=0;
            cout<<"Item No."<<items[i].itemNo<<"Quantity:"<<capacity;
        }
    }
    cout<<"Maximum profit within capacity"<< capacity<<"is"<<profit;
    return 0;
}
