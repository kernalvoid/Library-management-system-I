#include"BookRepository.h"


void BookRepository::add(const Book& book)
    {
        m_book.push_back(book);
    }

std::vector<Book>& BookRepository::getall()
    {
        return m_book;
    }

Book* BookRepository::findid(int id)
    {
        for(auto&book:m_book)
        {
            if(book.id()==id)
                {
                    return &book;
                }
        }
        return nullptr;
    }