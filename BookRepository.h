#ifndef BOOKREPOSITORY_H
#define BOOKREPOSITORY_H
#include "Book.h"
#include<vector>

class BookRepository
{   public:
        void add(const Book& book);
        std::vector<Book>&  getall();

        Book* findid(int id);
    
    private:
        std::vector<Book> m_book;

};




#endif
