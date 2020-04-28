#include<iostream>
#include<vector>
#include<algorithm>

#include "patron.h"
#include "book.h"
#include "error.h"
#include "library.h"

using namespace std;

int main()
{
	Book b1;
	b1.setISBN("12-33-2-A");
	b1.setName("Moo-Moo");
	b1.setAuthor("Turgenev");
	b1.setAdate("12.01.1833");
	b1.setGenre(Book::prosa);
	b1.setIn();

	Book b2;
	b2.setISBN("2-13-6-C");
	b2.setName("What to do");
	b2.setAuthor("Chernyshevskii");
	b2.setAdate("5.03.1853");
	b2.setGenre(Book::prosa);
	b2.setIn();

	Patron p1;
	p1.setName("Alex");
	p1.setCardNum("568834654");
	p1.setCharge(40);
	p1.setPaid(true);

	Patron p2;
	p2.setName("Bob");
	p2.setCardNum("53585343");
	p2.setCharge(40);
	p2.setPaid(false);

	Library l1;

	l1.addBookRecord(b1);
	l1.addBookRecord(b2);

	l1.addPatronRecord(p1);
	l1.addPatronRecord(p2);

	Date today;
	today.setDate("5.03.2020");
	l1.addTransactionRecord(today, b1, p1);
	l1.addTransactionRecord(today, b2, p2);

}
