#include <iostream>
#include "mysql.h"

using namespace std;

const int MAX_SIZE = 15; 

class JS
{
   string BranchName[MAX_SIZE];
   int BranchSize;
   Mysql MySQL;

   public:
      JS();
      ~JS();
   
      void addRollNoFields();
      void addRoomFields();
      
};
