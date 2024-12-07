#include <iostream>
#include <vector>
#include <map>
#include <string>
#include <algorithm>
#include "uuid.h"
#include "library.h"
using namespace std;

// Add a new book to the library
void Library::addBook(const string &title, Author &author)
{
    string newId = generateUUID();
    author.addBookID(newId);
    bookMap[newId] = {newId, title, author, false};
    cout << "Book added successfully. ID: " << newId << "\n";
}

// Display all books in the library
void Library::displayBooks()
{

    if (bookMap.empty())
    {
        cout << "No books in the library map.\n";
        return;
    }

    cout << "\nBooks in the Library:\n";
    for (const auto &book : bookMap)
    {
        cout << "ID map: " << book.first << endl
             << "Title: " << book.second.title << endl
             << "Author: " << book.second.author.name << endl
             << "Status: " << (book.second.isIssued ? "Issued" : "Available") << endl;
    }
}

// Issue a book by ID
void Library::issueBook(const string &idStr)
{
    string id;
    try
    {
        id = idStr;
    }
    catch (const std::exception &e)
    {
        cout << "Invalid UUID format.\n";
        return;
    }

    if (bookMap[id].isIssued)
    {
        cout << "Book is already issued.\n";
    }
    else
    {
        bookMap[id].isIssued = true;
        cout << "Book issued successfully.\n";
    }
}

// Return a book by ID
void Library::returnBook(const string &idStr)
{
    string id;
    try
    {
        id = idStr;
    }
    catch (const std::exception &e)
    {
        cout << "Invalid UUID format.\n";
        return;
    }

    if (bookMap[id].isIssued)
    {
        bookMap[id].isIssued = false;
        cout << "Book returned successfully.\n";
    }
    else
    {
        cout << "Book was not issued.\n";
    }
}
