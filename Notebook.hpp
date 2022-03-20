#include "Direction.hpp"
#include <string>
namespace ariel{
class Notebook{
char ***notebook;
public:
    Notebook();
    void write(int page, int row, int col, Direction dir, std::string s);
    std::string read(int page, int row, int col, Direction dir, int length);
    void erase(int page, int row, int col, Direction dir, int length);
    void show(int page);
};
}