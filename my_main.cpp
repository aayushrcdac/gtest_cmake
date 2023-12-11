#include <iostream>
#include <string>
#include "students/inc/InitStudent.h"
#include "socket/inc/InitSock.h"
#include "build/books/books.pb.h"
#include "math/inc/add.h"
#include "my_main.h"

using namespace std;
using namespace books;

int my_main(void)
{

    cout << "This is from my main \n";
    class books b;
    string name = "Best Things About India";
    string author = "XYZ";
    string publication = "Indian Books";
    string subject = "My country";
    int price = 200;
    int pages = 250;
    b.set_name(name);
    b.set_author(author);
    b.set_publication(publication);
    b.set_subject(subject);
    b.set_price(price);
    b.set_pages(pages);
    cout << "Total of (5+5) : " << add(5,5) << endl;
    cout << "Total of (0+5) : " << add(0,5) << endl;
    InitSocket();
    InitStudent();
    if(b.has_name() == 1) { cout << "Books values are set..." << endl; }

    return 0;
}


