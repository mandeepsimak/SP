#include "mysql.h"

main(void)
{
   string br[10];
   int s;
   Mysql MySQL;
   MySQL.Select();
   MySQL.getBranchNames(br, s);
   for(int i = 0; i < s; i++)
   {
      cout << "<br>Branch Name: " << br[i] << endl;
   }
   
   MySQL.getRoomNos(br, s);
   for(int i = 0; i < s; i++)
   {
      cout << "<br>Room Name: " << br[i] << endl;
   }
}
