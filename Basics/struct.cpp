# include <iostream> 
# include <cstring> 
using namespace std; 

void printbook(struct Books book); 
void printbookAd(struct Books *book);

struct Books
{
    char title[50];
    char author[50];
};

int main(int argc, char const *argv[])
{
    Books book1, book2; 
    strcpy( book1.title, "C++ tutorial");
    strcpy( book1.author, "Runoob"); 
    strcpy(book2.title,"css tutorial");
    strcpy(book2.author,"runoob");
    printbookAd(&book1);
    printbook(book2);
    
    return 0;
}

void printbook(struct Books book){
    cout << "title: " << book.title << endl;
    cout << "author:" << book.author << endl;
}
void printbookAd(struct Books *book){
    cout << "title: " << book->title<< endl;
    cout << "author: " << book ->author << endl; 
}

