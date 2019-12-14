#include<iostream>
#include "book.h"

using namespace std;

int main()
{
    Book book;

    bool sN = book.setName("Moo-Moo");
    bool sAu = book.setAuthor("Turgenev");
    bool sI = book.setISBN("12-33-21-A");
    bool sAd = book.setAdate("28.2.2001");
    bool sO = book.setIn();

    bool chk = sN && sAu && sI && sAd && sO;
    
    if (!chk) {cout << "error setting book data"; return -1;}
        else cout << "Adding of the new book: " <<
             book.getName() << " is successful" << endl;
    
    if (book.checkOut()) cout << "the book is out";
        else cout << "the book is in library";
}
