#include "Book.h"
#include <iostream>
using namespace std;

Book::Book(int id, string t, string a) {
    bookId = id;
    title = t;
    author = a;
    isIssued = false;
}

int Book::getId() {
    return bookId;
}

bool Book::getStatus() {
    return isIssued;
}

void Book::issueBook() {
    isIssued = true;
}

void Book::returnBook() {
    isIssued = false;
}

void Book::display() {
    cout << bookId << " | " << title << " | " << author
         << " | " << (isIssued ? "Issued" : "Available") << endl;
}
