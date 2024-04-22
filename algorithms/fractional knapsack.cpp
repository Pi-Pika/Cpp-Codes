#include <bits/stdc++.h>
#define in long long

using namespace std;

struct Item
{
    in value, weight;

    Item(in value, in weight)
        : value(value), weight(weight)
    {
    }
};

bool cmp(struct Item a, struct Item b)
{
    double r1 = (double)a.value / a.weight;
    double r2 = (double)b.value / b.weight;
    return r1 > r2;
}

double fractionalKnapsack(struct vector<Item> arr, in N, in size)
{
    sort(arr.begin(), arr.end(), cmp);

    in curWeight = 0;

    double finalvalue = 0.0;

    for (in i = 0; i < size; i++)
    {

        if (curWeight + arr[i].weight <= N)
        {
            curWeight += arr[i].weight;
            finalvalue += arr[i].value;
        }


        else
        {
            int remain = N - curWeight;
            finalvalue += arr[i].value * ((double)remain / arr[i].weight);
            break;
        }
    }

    return finalvalue;
}

// Driver Code
int main()
{
    int N = 60,a ,b;
    vector<Item> arr ;
    vector <in>  profit,weight;
    for (size_t i {0}; i < 4; ++i )
    {
        cin >> a ;
        weight.push_back(a);
    }
    for (size_t i {0}; i < 4; ++i )
    {
        cin >> a ;
        profit.push_back(a);
    }
    for (size_t i {0}; i < 4; ++i )
    {
        arr.push_back(Item(profit[i],weight[i]));
    }

    int size = arr.size();
    cout << "Maximum profit earned = " << fractionalKnapsack(arr, N, size) << endl;;
    arr.clear();
    weight.clear();
    profit.clear();
    return 0;
}
/*
10 40 20 24
100 280 120 120
*/
