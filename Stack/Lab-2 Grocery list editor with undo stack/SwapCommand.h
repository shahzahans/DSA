#ifndef SWAPCOMMAND_H
#define SWAPCOMMAND_H

#include <string>
#include <vector>
#include "UndoCommand.h"

class SwapCommand : public UndoCommand {
private:
   // TODO: Type your member variable declarations here
   std::vector<std::string>* sourceVector; // Pointer to the grocery list vector
   int index1;  // First index for the swap
   int index2; // Second index for the swap
public:
   // TODO: Type your constructor code here
   // Constructor to initialize sourceVector, index1, and index2
   SwapCommand(std::vector<std::string>* vec, int idx1, int idx2)
      : sourceVector(vec), index1(idx1), index2(idx2) {}
   
   void Execute() override {
      // TODO: Type your code here
      // Execute function to swap the items at index1 and index2 in sourceVector
      std::swap((*sourceVector)[index1], (*sourceVector)[index2]);
   }
};

#endif
