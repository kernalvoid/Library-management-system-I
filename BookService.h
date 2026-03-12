#ifndef BOOKSERVICE_H
#define BOOKSERVICE_H

#include "BookRepository.h"


class bookservice
{
    public:
    bookservice(BookRepository& repo);

    void addbook(int id,const std::string title, const std::string author);
    void borrowbook(int id);
    void returnbook(int id);
    void listbook();
    private:
    BookRepository& m_repo;
};



#endif