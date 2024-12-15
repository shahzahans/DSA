#ifndef REMOVELASTCOMMAND_H
#define REMOVELASTCOMMAND_H

#include <string>
#include <vector>
#include "UndoCommand.h"

class RemoveLastCommand : public UndoCommand {
private:
   std::vector<std::string>* sourceVector; // Pointer to the grocery list vector

public:
   // Wrote Code
   // Constructor to initialize sourceVector
   RemoveLastCommand(std::vector<std::string>* vector) {
      sourceVector = vector;
   }
   
   void Execute() override {
      // wrote code
      // Execute function to remove the last item from sourceVector
      if (!sourceVector->empty()) {
         sourceVector->pop_back();
      }
   }
};

#endif
