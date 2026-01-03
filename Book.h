#ifndef BOOK_H
#define BOOK_H

#include <string>
using namespace std;

class Book {
private:
    int bookId;
    string title;
    string author;
    bool isIssued;

public:
    Book(int id, string t, string a);

    int getId();
    bool getStatus();

    void issueBook();
    void returnBook();
    void display();
};

#endif
