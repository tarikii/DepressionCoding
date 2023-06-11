#include <iostream>
// Declaring that we are using std make us use cout or cin without declaring it manually everytime with std::cout
using namespace std;

int main(){
    int numShelves = 0;
    int numShelf = 0;
    int numBooks = 0;
    int totalBooks = 0;

    int totalShelfs;
    int booksCapacity;
    bool result = false;

    cout << "How many shelves are in your house?\n";
    cin >> numShelves;

    cout << "How many shelfs are in one shelve?\n";
    cin >> numShelf;

    cout << "How many books can you put in one shelve?\n";
    cin >> numBooks;

    cout << "What's the total books you have?\n";
    cin >> totalBooks;

    totalShelfs = numShelves * numShelf;

    booksCapacity = totalShelfs * totalBooks;

    if(booksCapacity >= totalBooks){
        result = true;
    }

    
    if(result == true){
        cout << "true";
    } else{
        cout << "false";
    }
    
}