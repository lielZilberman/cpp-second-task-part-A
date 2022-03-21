#include "Notebook.hpp"
#include "Direction.hpp"
#include <iostream>
#include <stdexcept>
using namespace std;  
using namespace ariel;
using ariel::Direction;

Notebook::Notebook(){

}

void Notebook::write(unsigned int page, unsigned int row, unsigned int col, Direction dir, std::string word){
    char c = 'f';
    cout << string(10, c) << endl;
    
}

string Notebook::read(unsigned int page, unsigned int row, unsigned int col, Direction dir, int len){
    return "hello";
}

void Notebook::erase(unsigned int page, unsigned int row, unsigned int col, Direction dir, int len){
    cout << "erasing" << endl;
    
}
void Notebook::show(unsigned int page){
    cout << "showing" << endl;
    
}