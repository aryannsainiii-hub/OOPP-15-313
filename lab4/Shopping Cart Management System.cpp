
#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

class Item
{
public:
    string name;
    int quantity;
    double price;
};

// Display
void displayCart(const vector<Item>& cart)
{
    cout << "\n----------- SHOPPING CART -----------\n";

    cout << left << setw(20) << "Item Name"
         << setw(12) << "Quantity"
         << setw(12) << "Price"
         << "Amount\n";

    cout << "-----------------------------------------------\n";

    for (auto x : cart)
    {
        cout << left << setw(20) << x.name
             << setw(12) << x.quantity
             << setw(12) << fixed << setprecision(2) << x.price
             << x.quantity * x.price << endl;
    }
}

// Calculate the total cart amount
double calculateTotal(const vector<Item>& cart)
{
    double total = 0;

    for (auto x : cart)
    {
        total += x.quantity * x.price;
    }

    return total;
}

// Apply 10% discount on items priced above Rs. 1000
void applyDiscount(vector<Item>& cart)
{
    for (auto &x : cart)
    {
        if (x.price > 1000)
        {
            x.price = x.price - (x.price * 0.10);
        }
    }
}

// Find the item having the highest unit price
Item findMostExpensiveItem(const vector<Item>& cart)
{
    Item ans = cart[0];

    for (auto x : cart)
    {
        if (x.price > ans.price)
        {
            ans = x;
        }
    }

    return ans;
}

int main()
{
    vector<Item> cart;
    int n;

    cout << "Enter number of items: ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        Item x;

        cout << "\nEnter item name: ";
        cin >> ws;
        getline(cin, x.name);

        cout << "Enter quantity: ";
        cin >> x.quantity;

        cout << "Enter price: ";
        cin >> x.price;

        cart.push_back(x);
    }

    // Display original cart
    displayCart(cart);

    // Calculate original total
    cout << "\nTotal Amount: Rs. "
         << calculateTotal(cart) << endl;

    // Find most expensive item
    Item x = findMostExpensiveItem(cart);

    cout << "\nMost Expensive Item: " << x.name;
    cout << "\nPrice: Rs. " << x.price << endl;

    // Apply discount
    applyDiscount(cart);

    // Display updated cart
    cout << "\n----------- AFTER DISCOUNT -----------";
    displayCart(cart);

    // Calculate updated total
    cout << "\nUpdated Total Amount: Rs. "
         << calculateTotal(cart) << endl;

    return 0;
}
