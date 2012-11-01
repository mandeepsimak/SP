#include "mysql.h"

main(void)
{
   cout<<"Content-type: text/html\r\n\r\n";
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
   
   string subcode[15][15];
   int size[10], total = 1;
   
   MySQL.getSubCodes(subcode, size, total);
   for(int i=1; i<=total; i++)
   {
      for(int j=0; j<size[i]; j++)
      {
         cout << "<br>" << subcode[i][j] << "<br>" << endl;
      }
   }
   
}
