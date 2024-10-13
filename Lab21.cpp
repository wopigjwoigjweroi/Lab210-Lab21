// COMSC-210 | Lab-21 | Jeremiah Ortiz
#include <iostream>
#include <cstdlib> 
using namespace std; 


class Goat {

    private: 

        int age; 

        string name; 

        string color; 

        string names[15] = {"Mark", "Steve", "Jack", "Hamil", "Jake", "Paul", "Abram", "Jacob", "Michael", "Frank", "Henry", "David", "Alice", "Bob", "Mia"}; 

        string colors[15] = {"Red", "Blue", "Green", "Yellow", "Brown", "Black", "Purple", "Pink", "Magenta", "Cyan", "Teal", "Gray", "White", "Orange", "Teal"}; 

      public: 

         Goat() {

            age = rand() % 20 + 1; 

            color = colors[rand() % 15];

            name = names[rand() % 15]; 

        }

        Goat(int age, string color, string name) : age(age), name(name), color(color) {}

       int getAge() {

            return age; 
        }

        string getName() {

            return name; 
        }

        string getColor() {

            return color; 
        }
}; 



    class DoublyLinkedList {

        private: 

        struct Node {

        Goat data;

        Node* prev;

        Node* next; 

        Node(Goat val, Node* p = nullptr, Node* n = nullptr)  {}

};
            Node* head; 

            Node* tail; 

        public:

}; 
