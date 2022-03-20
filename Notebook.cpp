#include "Notebook.hpp"
#include "Direction.hpp"
#include <iostream>
#include <stdexcept>
using namespace std;  
using namespace ariel;
using ariel::Direction;

Notebook::Notebook(){

}

void Notebook::write(int page, int row, int col, Direction dir, std::string word){
    cout << "writing" << endl;
    
}

string Notebook::read(int page, int row, int col, Direction dir, int len){
    return "hello";
}

void Notebook::erase(int page, int row, int col, Direction dir, int len){
    cout << "erasing" << endl;
    
}
void Notebook::show(int page){
    cout << "showing" << endl;
    
}