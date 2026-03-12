#ifndef BOOK_H
#define BOOK_H
#include<string>

class Book
{
    public:
        Book() = default;

        Book(int id,const std::string& title,const std::string& author) 
                : m_id(id),m_title(title),m_author(author),m_isborrowed(false){}
        
        int id() const{return m_id;}
        std::string title() const {return m_title;}
        std::string author() const {return m_author;}
        bool isborrowed() const {return m_isborrowed;}

        void borrow(){m_isborrowed = true;}
        void giveback(){m_isborrowed = false;}



    private:

        int m_id;
        std::string m_author;
        std::string m_title;
        bool m_isborrowed;
};

#endif