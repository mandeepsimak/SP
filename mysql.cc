
#include "mysql.h"

// Class member function definition

Mysql :: Mysql()
{
//   cout<<"Content-type: text/html\r\n\r\n";
   connect=mysql_init(NULL);
   if (!connect)
   {
       cout<<"MySQL Initialization Failed";
       //return 1;
   }   
   connect=mysql_real_connect(connect, SERVER, USER, PASSWORD, DATABASE, 0,NULL,0);
   if (connect)
   {
//       cout<<"Connection Succeeded\n";
   }
   else
   {
       cout<<"Connection Failed\n";
   }
   i = j = 0;
}

void Mysql :: query(string field[], string qry, int &size)
{
   mysql_query (connect, qry.c_str());
   res_set = mysql_store_result(connect);
   unsigned int numrows = mysql_num_rows(res_set);
   i = 0;
   while (((row=mysql_fetch_row(res_set)) !=NULL))
   {
       field[i] = row[0];
       i++;
   }
   size = i;
}

void Mysql :: query(string subcode[][MAX_SIZE], string qry, int size[], int &total)
{
   mysql_query (connect, qry.c_str());
   res_set = mysql_store_result(connect);
   unsigned int numrows = mysql_num_rows(res_set);
   i = 0;
   while (((row=mysql_fetch_row(res_set)) !=NULL))
   {
       subcode[total][i] = row[0];
       i++;
   }
   size[total] = i;
   total++;
}

void Mysql :: getSubCodes(string subcode[][MAX_SIZE], int size[], int &total)
{
//   for(int k = 3; k <= 4; k++)
//   {
//      qry = "Select subCode from IT where semester = ";
//      qry += k;
//      qry += ";";
//      query(subcode, qry, size, total);
//   }

   qry = "Select subCode from IT where semester = 3";
   query(subcode, qry, size, total);
   qry = "Select subCode from IT where semester = 4";
   query(subcode, qry, size, total);

}

void Mysql :: Select()
{
   mysql_query (connect,"select * from RollNoDetails;");
   res_set = mysql_store_result(connect);
   unsigned int numrows = mysql_num_rows(res_set);
   
   while (((row=mysql_fetch_row(res_set)) !=NULL))
   {
       cout<<"Sno : "<<row[i]<<"\t Branch: "<<row[i+1]<<endl;
       j += atoi (row[i]);
   }
}

void Mysql :: getBranchNames(string branchname[], int &size)
{
   qry = "select distinct BranchName from RollNoDetails;";
   query(branchname, qry, size);
    
}

void Mysql :: getRoomNos(string roomno[], int &size)
{
   qry = "select distinct RoomNo from RoomDetails;";
   query(roomno, qry, size);
}

// Destructor
Mysql :: ~Mysql()
{
   mysql_close (connect);
}

