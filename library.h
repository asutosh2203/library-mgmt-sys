#include <iostream>
#include <vector>
#include <map>
#include <string>
#include <algorithm>
using namespace std;

// Book structure to store book details
struct Book
{
    string id; // Unique identifier for the book
    string title;
    Author author;
    bool isIssued;
};

struct Author;

class Library
{
private:
    map<string, Book> bookMap;

public:
    friend struct Author;
    // Add a new book to the library
    void addBook(const string &title, Author &author);

    // Display all books in the library
    void displayBooks();

    // Issue a book by ID
    void issueBook(const string &idStr);

    // Return a book by ID
    void returnBook(const string &idStr);
};

struct Author
{
    string name;
    vector<string> bookIDs;

    void addBookID(const string &bookId)
    {
        bookIDs.push_back(bookId);
    }

    void showAuthor(string id, Library &lib)
    {
        for (const auto &it: bookIDs){
            cout << lib.bookMap[it].title << endl;
        }
    }
};