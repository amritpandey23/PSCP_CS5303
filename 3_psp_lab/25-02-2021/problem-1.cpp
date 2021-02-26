/* TITLE: 
DATE:
AUTHOR: Amrit Pandey MC20103 */
#include <iostream>
#include <string>
using namespace std;

class Book {
    public:
        string author;
        string title;
        string publisher;
        float price;
        int stock;
        Book(string author, string title, string publisher, float price, int stock)
        {
            this->author = author;
            this->title = title;
            this->publisher = publisher;
            this->price = price;
            this->stock = stock;
        }
        void print_details()
        {
            cout << endl;
            cout << "AUTHOR: " << author << endl;
            cout << "TITLE: " << title << endl;
            cout << "PUBLISHER: " << publisher << endl;
            cout << "PRICE: " << price << endl;
            cout << "STOCK: " << stock << endl;
        }
        string book_title()
        {
            return title;
        }
};

class Stock {
    private:
        Book *stock;
        int total_books;
    public:
        Stock(Book s[], int tb)
        {
            stock = s;
            total_books = tb;
        }
        void print_book_details(int id)
        {
            stock[id].print_details();
        }
        int search_book(string bname)
        {
            for (int i = 0; i < total_books; i++)
            {
                if (stock[i].book_title() == bname)
                {
                    return i;
                }
            }
            return -1;
        }
        Book get_book(int id)
        {
            return stock[id];
        }
};

int main()
{
    string bname;
    int copies_demand, bid;
    Book
        b1("Jhon Dudloo", "Oh Hi mark", "Pearson", 123.00, 5),
        b2("Alfred Nemo", "Krama ih ho", "TATA", 100.00, 2),
        b3("Ophrah Winfrey", "How to love yourself!", "n/a", 500.00, 2),
        b4("J Low", "Queen's Gambit", "Nissan", 200.00, 3),
        b5("Keto Pablo", "Romance in Italy", "Kimpaoo", 150.00, 4);

    Book books[] = {b1, b2, b3, b4, b5};
    Stock s1(books, 5);
    cout << "Enter name of book(eg: Oh Hi mark): ";
    getline(cin, bname);
    bid = s1.search_book(bname);
    if (bid != -1)
    {
        cout << "Yes its available!";
        s1.print_book_details(bid);
        Book book = s1.get_book(bid);
        cout << "Enter number of copies you want: ";
        cin >> copies_demand;
        if (copies_demand <= book.stock)
        {
            book.stock -= copies_demand;
            cout << "Books delivered!";
            book.print_details();
        }
        else
        {
            cout << "Sorry, that many copies are not available!" << endl;
        }
    }
    return 0;
}