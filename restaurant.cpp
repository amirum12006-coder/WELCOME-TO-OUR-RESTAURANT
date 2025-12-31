#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int choice, qty;
    char more;
    float total = 0;

    cout << "=====================================\n";
    cout << "        WELCOME TO OUR RESTAURANT     \n";
    cout << "=====================================\n";

    do {
        cout << "\n----------- MENU -----------\n";
        cout << "1. Burger      Rs. 50\n";
        cout << "2. Pizza       Rs. 100\n";
        cout << "3. Sandwich    Rs. 40\n";
        cout << "4. Cold Drink  Rs. 30\n";
        cout << "----------------------------\n";

        cout << "Enter your choice: ";
        cin >> choice;

        cout << "Enter quantity: ";
        cin >> qty;

        switch (choice) {
            case 1:
                total += 50 * qty;
                break;
            case 2:
                total += 100 * qty;
                break;
            case 3:
                total += 40 * qty;
                break;
            case 4:
                total += 30 * qty;
                break;
            default:
                cout << "Invalid choice!\n";
        }

        cout << "Do you want to order more? (y/n): ";
        cin >> more;

    } while (more == 'y' || more == 'Y');

    float gst = total * 0.05;   // 5% GST
    float grandTotal = total + gst;

    cout << "\n=====================================\n";
    cout << "               BILL                  \n";
    cout << "=====================================\n";
    cout << fixed << setprecision(2);
    cout << "Total Amount : Rs. " << total << endl;
    cout << "GST (5%)     : Rs. " << gst << endl;
    cout << "-------------------------------------\n";
    cout << "Grand Total  : Rs. " << grandTotal << endl;
    cout << "=====================================\n";
    cout << "Thank you! Visit Again 😊\n";

    return 0;
}
