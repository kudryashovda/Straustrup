#include<iostream>
#include<cassert>
#include "book.h"

using namespace std;

int main()
{
    Book book1;

    book1.setName("Moo-Moo");
    book1.setAuthor("Turgenev");
    book1.setISBN("12-33-21-A");
    book1.setAdate("28.2.2001");
    book1.setIn();


    Book book2;

    book2.setName("Oblomob");
    book2.setAuthor("Goncharov");
    book2.setISBN("32-3-21-C");
    book2.setAdate("12.6.1998");
    book2.setIn();


    assert(!(book1 == book2));
    assert(book1 != book2);
    
    assert(cout << book1);
    assert(cout << book2);
}
