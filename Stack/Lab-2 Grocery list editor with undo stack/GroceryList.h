#ifndef GROCERYLIST_H
#define GROCERYLIST_H

#include <iostream>
#include <stack>
#include "UndoCommand.h"
#include "RemoveLastCommand.h"
#include "InsertAtCommand.h"
#include "SwapCommand.h"

class GroceryList {
protected:
   std::vector<std::string> listItems;
   std::stack<UndoCommand*> undoStack;
   
public:
   virtual ~GroceryList() {
      // Each command on the undoStack must be deleted
      while (undoStack.size() > 0) {
         UndoCommand* topCommand = undoStack.top();
         undoStack.pop();
         delete topCommand;
      }
   }

   virtual void AddWithUndo(std::string newItemName) {
      // Add the new list item
      listItems.push_back(newItemName);
      
      // Make an undo command that removes the last item and push onto stack
      undoStack.push(new RemoveLastCommand(&listItems));
   }
   
   virtual void RemoveAtWithUndo(int removalIndex) {
      // TODO: Type your code here
      // Store the removed item
      std::string removedItem = listItems[removalIndex];
      listItems.erase(listItems.begin() + removalIndex);
      undoStack.push(new InsertAtCommand(&listItems, removalIndex, removedItem));
   }
   
   virtual void SwapWithUndo(int index1, int index2) {
      // TODO: Type your code here
      std::swap(listItems[index1], listItems[index2]);
      undoStack.push(new SwapCommand(&listItems, index1, index2));
      
   }
   
   // Pops and executes the undo command at the top of the undo stack. Then
   // deletes the executed command.
   virtual void ExecuteUndo() {
      // TODO: Type your code here
        if (!undoStack.empty()) {
         UndoCommand* command = undoStack.top();
         undoStack.pop();
         command->Execute();
         delete command;  // Free memory after execution
      }
   }
   
   virtual int GetListSize() const {
      return (int)listItems.size();
   }
   
   virtual int GetUndoStackSize() const {
      return (int)undoStack.size();
   }
   
   virtual std::vector<std::string> GetVectorCopy() const {
      return listItems;
   }
   
   virtual void Print(std::ostream& outputStream) {
      for (size_t i = 0; i < listItems.size(); i++) {
         outputStream << i << ". " << listItems[i] << std::endl;
      }
   }
};

#endif
