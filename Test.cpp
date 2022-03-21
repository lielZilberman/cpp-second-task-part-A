#include "doctest.h"
#include "Direction.hpp"
#include "Notebook.hpp"
#include <string>
using namespace std;
using namespace ariel;

ariel::Notebook myNotebook;

TEST_CASE("should be working"){
    myNotebook.write(/*page=*/33, /*row=*/22, /*column=*/44, Direction::Horizontal, "heyo");
    CHECK(myNotebook.read(33, 20, 47, Direction::Vertical, 10) == "__y_______");
    CHECK(myNotebook.read(33, 20, 48, Direction::Vertical, 4) == "__o_");
    CHECK(myNotebook.read(2, 20, 47, Direction::Vertical, 10) == "__________");
    myNotebook.erase(33, 22, 44, Direction::Vertical, 1);
    CHECK(myNotebook.read(33,20,44, Direction::Horizontal, 4) == "~eyo");
    myNotebook.write(33, 22, 49, Direction::Horizontal, "shuBidak?");
    CHECK(myNotebook.read(33, 22, 44, Direction::Horizontal, 10) == "~eyoshuBidak?_");
    myNotebook.write(29, 3, 30, Direction::Vertical, "iloveyou");
    CHECK(myNotebook.read(29, 3, 30, Direction::Vertical, 8) == "iloveyou");
    CHECK(myNotebook.read(29, 5, 30, Direction::Horizontal, 2) == "i_");
    CHECK(myNotebook.read(29, 6, 28, Direction::Horizontal, 4) == "__il");
    myNotebook.erase(29, 3, 30, Direction::Vertical, 8);
    CHECK(myNotebook.read(29, 3, 30, Direction::Vertical, 8) == "~~~~~~~~");
    CHECK(myNotebook.read(29, 4, 29, Direction::Horizontal, 5) == "_~___");
}

TEST_CASE("should not be working"){
    char f = 'f';
    CHECK_THROWS(myNotebook.write(1, 20, 3, Direction::Horizontal, string(101,f)));
    CHECK_THROWS(myNotebook.erase(11, 4, 33, Direction::Horizontal, 9999));
    CHECK_THROWS(myNotebook.read(1000, 1, 2, Direction::Horizontal, 1001));
    CHECK_THROWS(myNotebook.read(3000, 0, 999, Direction::Horizontal, 22));
    CHECK_THROWS(myNotebook.erase(23, 23, 101, Direction::Horizontal, 2));
    myNotebook.write(34, 1, 1, Direction::Horizontal, "hello");
    CHECK_THROWS(myNotebook.write(33, 1, 3, Direction::Vertical, "mynameis"));
    myNotebook.erase(34, 1, 1, Direction::Horizontal, 2);
    CHECK_THROWS(myNotebook.write(34, 1, 1, Direction::Horizontal, "hh"));
    CHECK_THROWS(myNotebook.erase(34, 1, 1, Direction::Horizontal, 1));
    myNotebook.write(44, 20, 23, Direction::Vertical, "yoyo");
    CHECK_THROWS(myNotebook.write(44, 19, 23, Direction::Vertical, "OP"));
    CHECK_THROWS(myNotebook.write(44, 20, 20, Direction::Horizontal, "ANIANI"));
}