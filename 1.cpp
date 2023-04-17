#include <iostream>
#include <vector>
#include <string>

using namespace std;

struct Contact {
    string name;
    string phone;
    string email;
};

int main() {
    vector<Contact> contacts;
    int choice;

    do {
        cout << "Contact Management System" << endl;
        cout << "------------------------" << endl;
        cout << "1. Add Contact" << endl;
        cout << "2. Display Contacts" << endl;
        cout << "3. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: {
                Contact newContact;
                cout << "Enter name: ";
                cin >> newContact.name;
                cout << "Enter phone number: ";
                cin >> newContact.phone;
                cout << "Enter email address: ";
                cin >> newContact.email;
                contacts.push_back(newContact);
                cout << "Contact added successfully!" << endl;
                break;
            }
            case 2: {
                if (contacts.size() == 0) {
                    cout << "No contacts found." << endl;
                    break;
                }
                cout << "Contacts:" << endl;
                for (const auto& contact : contacts) {
                    cout << "Name: " << contact.name << endl;
                    cout << "Phone: " << contact.phone << endl;
                    cout << "Email: " << contact.email << endl;
                    cout << endl;
                }
                break;
            }
            case 3: {
                cout << "Exiting program..." << endl;
                break;
            }
            default: {
                cout << "Invalid choice, please try again." << endl;
                break;
            }
        }
    } while (choice != 3);

    return 0;
