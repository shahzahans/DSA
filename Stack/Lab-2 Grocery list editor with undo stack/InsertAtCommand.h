#ifndef INSERTATCOMMAND_H
#define INSERTATCOMMAND_H

#include <string>
#include <vector>
#include "UndoCommand.h"

class InsertAtCommand : public UndoCommand {
private:
   // TODO: Type your member variable declarations here
   std::vector<std::string>* sourceVector; // Pointer to the grocery list vector
   int index; // The index where the item will be reinserted
   std::string item; // The item to be reinserted

public:
   // TODO: Type your constructor code here
   // Constructor to initialize sourceVector, index, and item
   InsertAtCommand(std::vector<std::string>* vec, int idx, const std::string& itm)
       : sourceVector(vec), index(idx), item(itm) {}
    
   void Execute() override {
      // TODO: Type your code here
       // Execute function to insert the item at the specified index in sourceVector
      sourceVector->insert(sourceVector->begin() + index, item);
   }
};

#endif
