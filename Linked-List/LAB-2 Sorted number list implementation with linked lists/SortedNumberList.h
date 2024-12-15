#ifndef SORTEDNUMBERLIST_H
#define SORTEDNUMBERLIST_H
#include "NumberList.h"

class SortedNumberList : public NumberList {
private:
   // Optional: Add any desired private functions here

public:
   SortedNumberList() {
      head = nullptr;
      tail = nullptr;
   }

   // Inserts the number into the list in the correct position such that the
   // list remains sorted in ascending order.
   void Insert(double number) {
     NumberListNode* newNode = new NumberListNode(number); // Create a new node with given data

     if (head == nullptr){ // If the list is empty
      head = newNode;
      tail = newNode;
      return;
     }

     if (number < head->GetData()) { // Insert at the beginning if the number is less than head's data
      newNode->SetNext(head);
      head->SetPrevious(newNode);
      head = newNode;
      return;
     }

     NumberListNode* current = head;
     while (current != nullptr && current->GetData() < number) { // Traverse the list to find the correct position for insertion
      current = current->GetNext();
     }

     if (current == nullptr){ // Insert at the end if we reached the end of the list
      tail->SetNext(newNode);
      newNode->SetPrevious(tail);
      tail = newNode;
     }
     else{ //  Insert in the middle before `current`
      newNode->SetNext(current);
      newNode->SetPrevious(current->GetPrevious());
      current->GetPrevious()->SetNext(newNode);
      current->SetPrevious(newNode);
     }
     
   }
   
   // Removes the node with the specified number value from the list. Returns
   // true if the node is found and removed, false otherwise.
   bool Remove(double number) {
      NumberListNode* current = head;

      while (current != nullptr && current->GetData() != number) { // Traverse to find the node with the specified number
         current = current->GetNext();
      }

      // If the node with the number is not found, return false
      if (current == nullptr) {
         return false;
      }

      // If removing the head node
      if (current == head) {
         head = current->GetNext();
         if (head != nullptr) {
            head->SetPrevious(nullptr);
         } else {
            tail = nullptr; // List is now empty
         }
      }
      // If removing the tail node
      else if (current == tail) {
         tail = current->GetPrevious();
         if (tail != nullptr) {
            tail->SetNext(nullptr);
         } else {
            head = nullptr; // List is now empty
         }
      }
      // Removing a middle node
      else {
         current->GetPrevious()->SetNext(current->GetNext());
         current->GetNext()->SetPrevious(current->GetPrevious());
      }

      // Delete the node and return true
      delete current;
      return true;
   }
};

#endif