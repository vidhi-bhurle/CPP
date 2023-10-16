#include<iostream>
using namespace std;
#include<string.h>

class Library
{
	int noOfTypes;
	public:
		Library();
		void show();
};

Library::Library()
{
	noOfTypes = 4;
}

void Library::show()
{
	cout << "The no. of genres: " << noOfTypes << endl;
}

class Author:virtual public Library
{
	int noOfBooks;
	public:
		Author();
		void display();
};

Author::Author()
{
	noOfBooks = 50;
}

void Author::display()
{
	cout << "The no. of books of the author in Library are " << noOfBooks << endl; 
}

class Distributor: virtual public Library
{
	int noOfPublications;
	public:
		Distributor();
		void display();
};

Distributor::Distributor()
{
	noOfPublications = 1;
}

void Distributor::display()
{
	cout << "The no. of publications with the distributor: " << noOfPublications << endl;
}

class Book: public Author, public Distributor
{
	int price;
	char name[15];
	public:
		Book();
		void display();
};

Book::Book()
{
	strcpy(name, "Harry Potter");
	price = 1000;
	
}
void Book::display()
{
	cout <<"Name of book: " << name << endl;
	cout << "Price: " << price << endl;
}

int main()
{
	Book b;
	b.display();
	b.show();
}
