#include <iostream>
#include <fstream>


using namespace std;


int main() {


    ifstream file("/Users/panin300200/CLionProjects/HomeWork/input");
    //chek for open the file
    if (!file.is_open()) {
        cout << "Err: file don`t open.\n";
        return -1;
    }


    struct list {
        list *previous;
        char letter;
        list *next;
    } *elem = new list, *n;


    //input from file
    elem->previous = nullptr;
    elem->next = new list;
    n = elem;
    for (file >> elem->letter; !file.eof() && n->letter != '.'; file >> n->letter) {
        n = n->next;
        n = new list;
        cout << n->letter;
    }
    file.close();
    n = nullptr;


    file.open ("/Users/panin300200/CLionProjects/HomeWork/output");
    //chek for open the file
    if (!file.is_open()) {
        cout << "Err: file don`t open.\n";
        return -1;
    }


    return 0;
}
