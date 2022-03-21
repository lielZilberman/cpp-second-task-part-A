#include "Direction.hpp"
#include <string>
namespace ariel{
class Notebook{
char **notebook;
public:
    Notebook();
    void write(unsigned int page, unsigned int row, unsigned int col, Direction dir, std::string word);
    std::string read(unsigned int page, unsigned int row, unsigned int col, Direction dir, int length);
    void erase(unsigned int page, unsigned int row, unsigned int col, Direction dir, int length);
    void show(unsigned int page);
};
}