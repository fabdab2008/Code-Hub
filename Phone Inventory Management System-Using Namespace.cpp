#include <iostream>
#include <string>

using namespace std;

namespace Inventory {
    namespace Electronics {
        class Smartphone {
        private:
            string modelName;
            float price;
            int quantity;

        public:
            void setModelName(const string& name) {
                modelName = name;
            }

            void setPrice(float p) {
                price = p;
            }

            void setQuantity(int q) {
                quantity = q;
            }

            string getModelName() const {
                return modelName;
            }

            float getPrice() const {
                return price;
            }

            int getQuantity() const {
                return quantity;
            }
        };
    }
}

int main() {
    using namespace Inventory::Electronics;

    Smartphone phones[10];
    int phoneCount = 0;

    int choice;
    while (true) {
        cout << "Menu:\n";
        cout << "1. Add a phone\n";
        cout << "2. Display phones\n";
        cout << "3. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 1) {
            if (phoneCount >= 10) {
                cout << "Cannot add more phones. Array is full.\n";
            } else {
                string name;
                float p;
                int q;

                cout << "Enter model name: ";
                cin >> name;
                cout << "Enter price: ";
                cin >> p;
                cout << "Enter quantity: ";
                cin >> q;

                Smartphone phone;
                phone.setModelName(name);
                phone.setPrice(p);
                phone.setQuantity(q);

                phones[phoneCount] = phone;
                phoneCount++;
                cout << "Phone added successfully!\n";
            }
        } else if (choice == 2) {
            if (phoneCount == 0) {
                cout << "No phones added yet.\n";
            } else {
                cout << "Phone List:\n";
                for (int i = 0; i < phoneCount; i++) {
                    cout << "Model Name: " << phones[i].getModelName() << endl;
                    cout << "Price: $" << phones[i].getPrice() << endl;
                    cout << "Quantity: " << phones[i].getQuantity() << endl;
                    cout << "-----------------------\n";
                }
            }
        } else if (choice == 3) {
            cout << "Exiting program.\n";
            break;
        } else {
            cout << "Invalid choice. Please try again.\n";
        }
    }

    return 0;
}
