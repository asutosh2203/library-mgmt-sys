#include <iostream>
#include <vector>
#include <map>
#include <string>
#include <algorithm>
#include "library.h"

using namespace std;

int main()
{
    Library library;
    int choice;

    do
    {
        cout << "\nLibrary Management System\n";
        cout << "1. Add Book\n";
        cout << "2. Display Books\n";
        cout << "3. Issue Book\n";
        cout << "4. Return Book\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
        {
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Clear input buffer
            string title, author;
            cout << "Enter book title: ";
            getline(cin, title);
            cout << "Enter book author: ";
            getline(cin, author);
            Author a{author};
            library.addBook(title, a);
            break;
        }
        case 2:
            library.displayBooks();
            break;
        case 3:
        {
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Clear input buffer
            string idStr;
            cout << "Enter book ID to issue: ";
            getline(cin, idStr);
            library.issueBook(idStr);
            break;
        }
        case 4:
        {
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Clear input buffer
            string idStr;
            cout << "Enter book ID to return: ";
            getline(cin, idStr);
            library.returnBook(idStr);
            break;
        }
        case 5:
            cout << "Exiting the system.\n";
            break;
        default:
            cout << "Invalid choice. Please try again.\n";
        }
    } while (choice != 5);

    return 0;
}
