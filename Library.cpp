#include "Library.h"
#include <iostream>
using namespace std;

void Library::addBook() {
    int id;
    string title, author;

    cout << "Enter Book ID: ";
    cin >> id;
    cin.ignore();

    cout << "Enter Book Title: ";
    getline(cin, title);

    cout << "Enter Author Name: ";
    getline(cin, author);

    books.push_back(Book(id, title, author));
    cout << "Book added successfully.\n";
}

void Library::displayBooks() {
    if (books.empty()) {
        cout << "No books available.\n";
        return;
    }
    for (auto &b : books) {
        b.display();
    }
}

void Library::issueBook() {
    int id;
    cout << "Enter Book ID to issue: ";
    cin >> id;

    for (auto &b : books) {
        if (b.getId() == id && !b.getStatus()) {
            b.issueBook();
            cout << "Book issued successfully.\n";
            return;
        }
    }
    cout << "Book not found or already issued.\n";
}

void Library::returnBook() {
    int id;
    cout << "Enter Book ID to return: ";
    cin >> id;

    for (auto &b : books) {
        if (b.getId() == id && b.getStatus()) {
            b.returnBook();
            cout << "Book returned successfully.\n";
            return;
        }
    }
    cout << "Book not found or not issued.\n";
}
