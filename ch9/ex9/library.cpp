#include "library.h"
#include "book.h"
#include "patron.h"
#include "error.h"


void Library::addBookRecord(Book b)
{
	bookRecords.push_back(b);
};

void Library::addPatronRecord(Patron p)
{
	patronRecords.push_back(p);
};

bool Library::isBookInRecords(Book book)
{
	bool result = false;

	for(auto it: bookRecords) {
		if ( it == book) result = true;
	}

	return result;
}

bool Library::isPatronInRecords(Patron p)
{
	bool result = false;

	for(auto it: patronRecords) {
		if (p == it) result = true;
	}
	return result;
}

void Library::addTransactionRecord(Date date, Book book, Patron patron)
{
	//checks
	if ( !isBookInRecords(book)) {
		error("The book is not registered in our library");
		return;
	}

	if ( !isPatronInRecords(patron)) {
		error("The patron is not registered in our library");
		return;
	}

	if (!patron.isPaid() ) {
		error(patron.getName() + "'s charge is not paid\n");
		return;
	}

	Transaction	newTransaction(book, patron, date);
	transactionRecords.push_back(newTransaction);
}

vector<string> Library::getAllPatronsNotPaid()
{
	vector<string> vs;
	for(auto it: patronRecords) if ( !it.isPaid() ) vs.push_back( it.getName() );

	return vs;
}
