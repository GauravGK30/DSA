// BOOKS MANAGEMENT SYSTEM

#include <iostream>
#include <fstream>
#include <cstdio>  
using namespace std;

class BookManager {
    string id, name, author, search;
    fstream file;

public:
    void addBook();
    void showAll();
    void extractBook();
    void deleteBook();
} obj;

int main() {
    char choice;
    do {
        cout << "\n----------------------------------" << endl;
        cout << "1 - Show All Books" << endl;
        cout << "2 - Extract Book by ID" << endl;
        cout << "3 - Add Book (ADMIN)" << endl;
        cout << "4 - Delete Book by ID" << endl;
        cout << "5 - Exit" << endl;
        cout << "----------------------------------" << endl;
        cout << "Enter Your Choice: ";
        cin >> choice;
        cin.ignore(); // To consume newline

        switch (choice) {
            case '1': obj.showAll(); break;
            case '2': obj.extractBook(); break;
            case '3': obj.addBook(); break;
            case '4': obj.deleteBook(); break;
            case '5': cout << "Exiting... Goodbye!" << endl; break;
            default: cout << "Invalid Choice. Please try again!" << endl;
        }

    } while (choice != '5');

    return 0;
}

void BookManager::addBook() {
    cout << "\nEnter Book ID: ";
    getline(cin, id);
    cout << "Enter Book Name: ";
    getline(cin, name);
    cout << "Enter Author Name: ";
    getline(cin, author);

    file.open("bookData.txt", ios::out | ios::app);
    if (!file) {
        cout << "Error opening file!" << endl;
        return;
    }

    file << id << "*" << name << "*" << author << endl;
    file.close();
    cout << "Book added successfully!" << endl;
}

void BookManager::showAll() {
    file.open("bookData.txt", ios::in);
    if (!file.is_open()) {
        cout << "No books found. Add some books first!" << endl;
        return;
    }

    bool isEmpty = true;
    cout << "\n\t\tBook ID\t\tBook Name\t\tAuthor Name" << endl;
    cout << "--------------------------------------------------------------------------------\n";

    while (getline(file, id, '*') && getline(file, name, '*') && getline(file, author)) {
        isEmpty = false;
        cout << "\t\t" << id << "\t\t" << name << "\t\t" << author << endl;
    }

    if (isEmpty) {
        cout << "\t\tNo book records available.\n";
    }

    file.close();
}

void BookManager::extractBook() {
    cout << "\nEnter Book ID to Extract: ";
    getline(cin, search);

    file.open("bookData.txt", ios::in);
    if (!file.is_open()) {
        cout << "No books found. Add some books first!" << endl;
        return;
    }

    bool found = false;
    while (getline(file, id, '*') && getline(file, name, '*') && getline(file, author)) {
        if (search == id) {
            cout << "\nBook Found:\n";
            cout << "\t\tBook ID\t\tBook Name\t\tAuthor Name" << endl;
            cout << "\t\t" << id << "\t\t" << name << "\t\t" << author << endl;
            found = true;
            break;
        }
    }

    if (!found) {
        cout << "Book with ID '" << search << "' not found." << endl;
    }

    file.close();
}

void BookManager::deleteBook() {
    cout << "\nEnter Book ID to Delete: ";
    getline(cin, search);

    ifstream inFile("bookData.txt");
    ofstream tempFile("temp.txt");

    if (!inFile || !tempFile) {
        cout << "Error accessing files!" << endl;
        return;
    }

    bool found = false;
    while (getline(inFile, id, '*') && getline(inFile, name, '*') && getline(inFile, author)) {
        if (id != search) {
            tempFile << id << "*" << name << "*" << author << endl;
        } else {
            found = true;
        }
    }

    inFile.close();
    tempFile.close();

    if (found) {
        remove("bookData.txt");              
        rename("temp.txt", "bookData.txt"); 
        cout << "Book with ID '" << search << "' deleted successfully.\n";
    } else {
        remove("temp.txt");
        cout << "Book with ID '" << search << "' not found.\n";
    }
}
