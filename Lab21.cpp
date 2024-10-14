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

        Node(Goat val, Node* p = nullptr, Node* n = nullptr) : data(val), prev(p), next(n) {}

};
            Node* head; 

            Node* tail; 

        public:

 DoublyLinkedList() : head(nullptr), tail(nullptr) {}

 void push_back(Goat value) {

     Node* newNode = new Node(value);

     if (!tail) {

         tail = head = newNode;
     }
     else {

         tail->next = newNode;

         newNode->prev = tail;

         tail = newNode;
     }
 }

 void push_front(Goat value) {

     Node* newNode = new Node(value);

     if (!head) {

         head = tail = newNode;
     }
     else {

         newNode->next = head;

         head->prev = newNode;

         head = newNode;
     }
 }

 void print_forward() {

     Node* current = head;

     while (current) {

         cout << current->data.getName() << " (" << current->data.getColor() << "," << current->data.getAge() << ")" << endl;

         current = current->next;
     }

     cout << endl;
 }


 void print_reverse() {

     Node* current = tail;

     while (current) {

         cout << current->data.getName() << " ( " << current->data.getColor() << " ," << current->data.getAge() << " )" << endl;

         current = current->prev;
     }

     cout << endl;
 }

 ~DoublyLinkedList() {
     while (head) {

         Node* temp = head;

         head = head->next;

         delete temp;
     }
 }

}; 
