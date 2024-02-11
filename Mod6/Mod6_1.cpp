#include <iostream>
#include <string>

using namespace std;

int main() {

    const double MINIMUM_CHARGE = 35.00;
    const double ADDITIONAL_CHARACTER_CHARGE = 4.00;
    const double OAK_CHARGE = 20.00;
    const double GOLD_LEAF_LETTERING_CHARGE = 15.00;

    string signText;
    int signLength;
    char signMaterial;
    char letteringColor;
    double totalPrice;

    cout << "Enter the text for the sign: ";
    getline(cin, signText);

    cout << "Enter the material of the sign (O for oak, P for pine): ";
    cin >> signMaterial;

    cout << "Enter the color of the lettering (B for black, W for white, G for gold-leaf): ";
    cin >> letteringColor;

    signLength = signText.length();

    totalPrice = MINIMUM_CHARGE + (signLength > 5 ? (signLength - 5) * ADDITIONAL_CHARACTER_CHARGE : 0);

    if (signMaterial == 'O') {
        totalPrice += OAK_CHARGE;
    }

    if (letteringColor == 'G') {
        totalPrice += GOLD_LEAF_LETTERING_CHARGE;
    }

    cout << "The price of the sign is: $" << totalPrice << endl;

    return 0;
}
