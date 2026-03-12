#include "BookRepository.h"
#include "BookService.h"
#include<iostream>



int main()
{

    BookRepository repo;
    bookservice service(repo);

    try {
        service.addbook(1, "Clean Code", "Robert Martin");
        service.addbook(2, "Design Patterns", "GoF");

        service.borrowbook(1);

        service.listbook();

        service.returnbook(1);

        std::cout << "\nAfter return:\n";
        service.listbook();
    }
    catch (std::exception& e) {
        std::cout << "Error: " << e.what() << std::endl;
    }
    return 0;
}