#include <iostream>
#include "Package.h"
using namespace std;
#include <vector>
#include "OverNightPackage.h"
#include "Package.h"

int main() {

    Adress sender("Sender Name", 123456789, "Sender City", "Sender Street");
    Adress receiver("Receiver Name", 987654321, "Receiver City", "Receiver Street");

    // Create an OvernightPackage object
    Package *packagePtr = new OverNightPackage(2.50, 2.0, sender, receiver, 1.0);

    // Add the package to the vector
    vector<Package *> myPackages;
    myPackages.push_back(packagePtr);

    // Process the packages in the vector
    for (int i = 0; i < myPackages.size(); i++) {
        // Print package information (you might want to implement a print function in your Package classes)
        cout << "Package Information:" << endl;
        cout << "Price: " << myPackages.at(i)->getPrice() << endl;
        cout << "Weight: " << myPackages.at(i)->getWeight() << endl;
        cout << "Weight: " << myPackages.at(i)->calculatePrice() << endl;
//        cout << "Info: " << myPackages.at(i)->printInfo() << endl;

        // Check if the package is an instance of the OverNightPackage class

        // Clean up memory
        delete myPackages.at(i);
    }

    return 0;

}
