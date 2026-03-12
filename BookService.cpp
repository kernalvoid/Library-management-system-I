#include "BookService.h"
#include<iostream>

bookservice::bookservice(BookRepository& repo) :m_repo(repo){}

void bookservice::addbook(int id,const std::string title,const std::string author)
    {
        if(title.empty() || author.empty())
        {
             std::__throw_invalid_argument("title and author cannot be empty");
        }

        m_repo.add(Book(id,title,author));
    }

void bookservice::borrowbook(int id)
    {
        Book * book = m_repo.findid(id);
        if(!book)
        {   
            std::__throw_runtime_error("no books found");
        }

        if(book->isborrowed())
        {
            std::__throw_runtime_error("book is already borrowed");
        }
        book->borrow();
    }

void bookservice::returnbook(int id)
    {
        Book* book = m_repo.findid(id);

        if(!book)
        {
            std::__throw_runtime_error(" book not found");

        }

        book->giveback();
    }

void bookservice::listbook()
    {
        for(auto&book :m_repo.getall())
        {
            std::cout<<book.id()<<" | "
                    <<book.title()<<" | "
                    <<book.author()<<" | "
                    <<(book.isborrowed() ? "borrowed" : "available")
                    <<std::endl;
        }
    }