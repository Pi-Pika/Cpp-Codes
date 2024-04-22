#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Structure to represent an item
struct Item {
    int weight;
    int value;
    double valuePerWeight; // Value-to-Weight ratio
};

// Function to compare items based on their value-to-weight ratio in descending order
bool compareItems(const Item& item1, const Item& item2)
{
    return item1.valuePerWeight > item2.valuePerWeight;
}

// Function to solve Fractional Knapsack
double fractionalKnapsack(int capacity, vector<Item>& items) {
    // Calculate value-to-weight ratio for each item
    for (Item& item : items)
    {
        item.valuePerWeight = static_cast<double>(item.value) / item.weight;
    }

    // Sort items based on value-to-weight ratio in descending order
    sort(items.begin(), items.end(), compareItems);

    double totalValue = 0.0;

    // Fill the knapsack
    for (const Item& item : items)
    {
        if (capacity <= 0)
        {
            break;
        }

        // Take the whole item if possible
        if (item.weight <= capacity)
        {
            totalValue += item.value;
            capacity -= item.weight;
        } else { // Take a fraction of the item
            totalValue += (static_cast<double>(capacity) / item.weight) * item.value;
            break;
        }
    }

    return totalValue;
}

int main() {
    vector<Item> items =
    {
        {10, 60},
        {20, 100},
        {30, 120}
    };

    int capacity = 50;

    double maxValue = fractionalKnapsack(capacity, items);

    cout << "Maximum value obtained from Fractional Knapsack: " << maxValue << endl;

    return 0;
}

